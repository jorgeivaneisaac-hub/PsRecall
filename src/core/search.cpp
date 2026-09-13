#include "../../include/core/search.hpp"
#include <chrono>
#include <cstdint>
#include <string>
#include <thread>

namespace core::search {

void Searcher::update_numbers() noexcept {
    if (_ruta_.ruta == ruta_actual) {
        _ruta_.numbers_visits++;
    }
}

uint64_t Searcher::register_time() {
    // Evitamos llamadas redundantes y asignaciones en bucle caliente
    while (_ruta_.ruta == ruta_actual) {
        // Simulación de tics o intervalo de muestreo para evitar saturación de CPU
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        _ruta_.time += 100; // Acumulamos en milisegundos reales

        std::string nueva_ruta = update_rut();
        if (nueva_ruta != ruta_actual) {
            ruta_actual = std::move(nueva_ruta);
            break;
        }
    }
    return _ruta_.time;
}

} // namespace core::search
