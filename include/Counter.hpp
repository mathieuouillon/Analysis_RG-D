#pragma once

struct Counter {
    std::atomic_int nb_e{0};
    std::atomic_int nb_pion_plus{0};
    std::atomic_int nb_pion_minus{0};
};
