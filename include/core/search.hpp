#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace core::search {

struct Ruta {
    std::string ruta;
    uint64_t numbers_visits = 0;
    uint64_t time = 0;
};

struct RutaPriori {
    Ruta _ruta;
    uint64_t cali = 0; // Soluciona el warning de miembro sin inicializar
};

class Searcher {
public:
    Ruta _ruta_;
    std::string ruta_actual;

    explicit Searcher(std::string rut_) noexcept
        : _ruta_(std::move(rut_), 0, 0), ruta_actual(_ruta_.ruta) {}

    void update_numbers() noexcept;  // Adaptado a snake_case para cumplir con el linter
    std::string update_rut();        // Adaptado a snake_case
    uint64_t register_time();        // Adaptado a snake_case
    uint64_t assign_cali() noexcept; // Adaptado a snake_case (y corregido typo a assign)

    std::vector<RutaPriori> rutas;
};

} // namespace core::search
