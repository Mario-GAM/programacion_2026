#include <iostream>
#include <string>
#include <curl/curl.h>
#include <json/json.h>

// Callback para escribir los datos de la respuesta HTTP
size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main() {
    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if(curl) {
        // URL del endpoint de la API (ejemplo: una API pública de pruebas)
        std::string api_url = "https://jsonplaceholder.typicode.com/todos/1";

        // Configurar la URL
        curl_easy_setopt(curl, CURLOPT_URL, api_url.c_str());
        // Configurar la función de callback para procesar la respuesta
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        // Pasar el buffer donde se almacenará la respuesta
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Realizar la solicitud HTTP GET
        res = curl_easy_perform(curl);

        // Verificar si la solicitud fue exitosa
        if(res != CURLE_OK) {
            std::cerr << "Error al realizar la solicitud cURL: " << curl_easy_strerror(res) << std::endl;
        } else {
            std::cout << "Respuesta de la API:\n" << readBuffer << std::endl;

            // Parsear la respuesta JSON
            Json::CharReaderBuilder readerBuilder;
            Json::Value root;
            std::string errs;
            std::istringstream sstream(readBuffer);

            if (Json::parseFromStream(readerBuilder, sstream, &root, &errs)) {
                std::cout << "\nDatos JSON parseados:\n";
                std::cout << "User ID: " << root["userId"].asInt() << std::endl;
                std::cout << "ID: " << root["id"].asInt() << std::endl;
                std::cout << "Title: " << root["title"].asString() << std::endl;
                std::cout << "Completed: " << (root["completed"].asBool() ? "true" : "false") << std::endl;
            } else {
                std::cerr << "Error al parsear JSON: " << errs << std::endl;
            }
        }

        // Limpiar la sesión cURL
        curl_easy_cleanup(curl);
    }

    // Limpiar cURL global
    curl_global_cleanup();

    return 0;
}
