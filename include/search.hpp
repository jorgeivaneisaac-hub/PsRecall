#pragma once
#include <cstdint>
#include <string_view>

/**
 * @namespace core::search
 * @brief Es un namespace que contiene la logica de busqueda de archivos
 */
namespace core::search {

/**
 *@struct Ruta
 *@brief es la estructur aque guerda temopralmente durante la ejecucion de el programa
 */
struct Ruta {
    // Elementos
    std::string_view ruta;
    uint64_t numbers_visits;
    // Funciones
};
/**
 * @class Searcher
 * @brief Es la claase que encuentra y guarda los archivos en base a su nivel de uso
 */
class Searcher {
public:
    Ruta ruta_;
    Searcher(Ruta rut_) noexcept : ruta_(rut_) {} ///< Constructor
    ~Searcher(); ///< Destructor de la clase definido en la impletación
}; // class Searcher

} // namespace core::search
