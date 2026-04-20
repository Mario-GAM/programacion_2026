#include "conversacion.h"
#include <fstream>
#include <ctime>

void Conversacion::agregarMensaje(const Mensaje& msg) {
    mensajes.push_back(msg);
}

void Conversacion::guardarEnArchivo(const std::string& ruta) const {
    std::ofstream archivo(ruta, std::ios::app);
    for (const auto& msg : mensajes) {
        std::string fecha = std::ctime(&msg.FechaHora);
        if (!fecha.empty() && fecha.back() == '\n') {
            fecha.pop_back();
        }

        archivo << "[" << msg.remitente << "] "
                << fecha << ": "
                << msg.contenido << "\n";
    }
    archivo.close();
}
