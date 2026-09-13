#include "../include/core/search.hpp"
int main() {
    core::search::Ruta rutas{"C:\\Users\\Lenovo\\Desktop"};
    core::search::Searcher searcher(rutas.ruta);
    return 0;
}
