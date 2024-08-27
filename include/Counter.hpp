#pragma once

struct Counter {
    std::atomic_int nb_e{0};
    std::atomic_int nb_pion_plus{0};
    std::atomic_int nb_pion_minus{0};

    std::atomic_int nb_e_neg_status{0};
    std::atomic_int nb_e_status_2000{0};

    std::atomic_int nb_pion_plus_forward{0};
    std::atomic_int nb_pion_plus_central{0};

    std::atomic_int nb_pion_minus_forward{0};
    std::atomic_int nb_pion_minus_central{0};
};
