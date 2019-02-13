#include "experimentsetup.h"


// List of all detectors, sorted by the address. Needs to be edited by
// the user whenever the addresses are changed.

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


DetectorInfo_t pDetector[] =
{
    {0, f000MHz, unused, 0, 0},
    {1, f000MHz, unused, 0, 0},
    {2, f000MHz, unused, 0, 0},
    {3, f000MHz, unused, 0, 0},
    {4, f000MHz, unused, 0, 0},
    {5, f000MHz, unused, 0, 0},
    {6, f000MHz, unused, 0, 0},
    {7, f000MHz, unused, 0, 0},
    {8, f000MHz, unused, 0, 0},
    {9, f000MHz, unused, 0, 0},
    {10, f000MHz, unused, 0, 0},
    {11, f000MHz, unused, 0, 0},
    {12, f000MHz, unused, 0, 0},
    {13, f000MHz, unused, 0, 0},
    {14, f000MHz, unused, 0, 0},
    {15, f000MHz, unused, 0, 0},
    {16, f000MHz, unused, 0, 0},
    {17, f000MHz, unused, 0, 0},
    {18, f000MHz, unused, 0, 0},
    {19, f000MHz, unused, 0, 0},
    {20, f000MHz, unused, 0, 0},
    {21, f000MHz, unused, 0, 0},
    {22, f000MHz, unused, 0, 0},
    {23, f000MHz, unused, 0, 0},
    {24, f000MHz, unused, 0, 0},
    {25, f000MHz, unused, 0, 0},
    {26, f000MHz, unused, 0, 0},
    {27, f000MHz, unused, 0, 0},
    {28, f000MHz, unused, 0, 0},
    {29, f000MHz, unused, 0, 0},
    {30, f000MHz, unused, 0, 0},
    {31, f000MHz, unused, 0, 0},
    {32, f000MHz, unused, 0, 0},
    {33, f000MHz, unused, 0, 0},
    {34, f000MHz, unused, 0, 0},
    {35, f000MHz, unused, 0, 0},
    {36, f000MHz, unused, 0, 0},
    {37, f000MHz, unused, 0, 0},
    {38, f000MHz, unused, 0, 0},
    {39, f000MHz, unused, 0, 0},
    {40, f000MHz, unused, 0, 0},
    {41, f000MHz, unused, 0, 0},
    {42, f000MHz, unused, 0, 0},
    {43, f000MHz, unused, 0, 0},
    {44, f000MHz, unused, 0, 0},
    {45, f000MHz, unused, 0, 0},
    {46, f000MHz, unused, 0, 0},
    {47, f000MHz, unused, 0, 0},
    {48, f000MHz, unused, 0, 0},
    {49, f000MHz, unused, 0, 0},
    {50, f000MHz, unused, 0, 0},
    {51, f000MHz, unused, 0, 0},
    {52, f000MHz, unused, 0, 0},
    {53, f000MHz, unused, 0, 0},
    {54, f000MHz, unused, 0, 0},
    {55, f000MHz, unused, 0, 0},
    {56, f000MHz, unused, 0, 0},
    {57, f000MHz, unused, 0, 0},
    {58, f000MHz, unused, 0, 0},
    {59, f000MHz, unused, 0, 0},
    {60, f000MHz, unused, 0, 0},
    {61, f000MHz, unused, 0, 0},
    {62, f000MHz, unused, 0, 0},
    {63, f000MHz, unused, 0, 0},
    {64, f100MHz, clover, 0, 0},
    {65, f100MHz, clover, 0, 1},
    {66, f100MHz, clover, 0, 2},
    {67, f100MHz, clover, 0, 3},
    {68, f100MHz, unused, 0, 0},
    {69, f100MHz, unused, 0, 0},
    {70, f100MHz, unused, 0, 0},
    {71, f100MHz, unused, 0, 0},
    {72, f100MHz, clover, 1, 0},
    {73, f100MHz, clover, 1, 1},
    {74, f100MHz, clover, 1, 2},
    {75, f100MHz, clover, 1, 3},
    {76, f100MHz, unused, 0, 0},
    {77, f100MHz, unused, 0, 0},
    {78, f100MHz, unused, 0, 0},
    {79, f100MHz, unused, 0, 0},
    {80, f000MHz, unused, 0, 0},
    {81, f000MHz, unused, 0, 0},
    {82, f000MHz, unused, 0, 0},
    {83, f000MHz, unused, 0, 0},
    {84, f000MHz, unused, 0, 0},
    {85, f000MHz, unused, 0, 0},
    {86, f000MHz, unused, 0, 0},
    {87, f000MHz, unused, 0, 0},
    {88, f000MHz, unused, 0, 0},
    {89, f000MHz, unused, 0, 0},
    {90, f000MHz, unused, 0, 0},
    {91, f000MHz, unused, 0, 0},
    {92, f000MHz, unused, 0, 0},
    {93, f000MHz, unused, 0, 0},
    {94, f000MHz, unused, 0, 0},
    {95, f000MHz, unused, 0, 0},
    {96, f100MHz, clover, 2, 0},
    {97, f100MHz, clover, 2, 1},
    {98, f100MHz, clover, 2, 2},
    {99, f100MHz, clover, 2, 3},
    {100, f100MHz, unused, 0, 0},
    {101, f100MHz, unused, 0, 0},
    {102, f100MHz, unused, 0, 0},
    {103, f100MHz, unused, 0, 0},
    {104, f100MHz, clover, 3, 0},
    {105, f100MHz, clover, 3, 1},
    {106, f100MHz, clover, 3, 2},
    {107, f100MHz, clover, 3, 3},
    {108, f100MHz, unused, 0, 0},
    {109, f100MHz, unused, 0, 0},
    {110, f100MHz, unused, 0, 0},
    {111, f100MHz, unused, 0, 0},
    {112, f000MHz, unused, 0, 0},
    {113, f000MHz, unused, 0, 0},
    {114, f000MHz, unused, 0, 0},
    {115, f000MHz, unused, 0, 0},
    {116, f000MHz, unused, 0, 0},
    {117, f000MHz, unused, 0, 0},
    {118, f000MHz, unused, 0, 0},
    {119, f000MHz, unused, 0, 0},
    {120, f000MHz, unused, 0, 0},
    {121, f000MHz, unused, 0, 0},
    {122, f000MHz, unused, 0, 0},
    {123, f000MHz, unused, 0, 0},
    {124, f000MHz, unused, 0, 0},
    {125, f000MHz, unused, 0, 0},
    {126, f000MHz, unused, 0, 0},
    {127, f000MHz, unused, 0, 0},
    {128, f100MHz, clover, 4, 0},
    {129, f100MHz, clover, 4, 1},
    {130, f100MHz, clover, 4, 2},
    {131, f100MHz, clover, 4, 3},
    {132, f100MHz, unused, 0, 0},
    {133, f100MHz, unused, 0, 0},
    {134, f100MHz, unused, 0, 0},
    {135, f100MHz, unused, 0, 0},
    {136, f100MHz, clover, 5, 0},
    {137, f100MHz, clover, 5, 1},
    {138, f100MHz, clover, 5, 2},
    {139, f100MHz, clover, 5, 3},
    {140, f100MHz, unused, 0, 0},
    {141, f100MHz, unused, 0, 0},
    {142, f100MHz, unused, 0, 0},
    {143, f100MHz, unused, 0, 0},
    {144, f000MHz, unused, 0, 0},
    {145, f000MHz, unused, 0, 0},
    {146, f000MHz, unused, 0, 0},
    {147, f000MHz, unused, 0, 0},
    {148, f000MHz, unused, 0, 0},
    {149, f000MHz, unused, 0, 0},
    {150, f000MHz, unused, 0, 0},
    {151, f000MHz, unused, 0, 0},
    {152, f000MHz, unused, 0, 0},
    {153, f000MHz, unused, 0, 0},
    {154, f000MHz, unused, 0, 0},
    {155, f000MHz, unused, 0, 0},
    {156, f000MHz, unused, 0, 0},
    {157, f000MHz, unused, 0, 0},
    {158, f000MHz, unused, 0, 0},
    {159, f000MHz, unused, 0, 0},
    {160, f100MHz, unused, 6, 0},
    {161, f100MHz, unused, 6, 1},
    {162, f100MHz, unused, 6, 2},
    {163, f100MHz, unused, 6, 3},
    {164, f000MHz, unused, 0, 0},
    {165, f000MHz, unused, 0, 0},
    {166, f000MHz, unused, 0, 0},
    {167, f000MHz, unused, 0, 0},
    {168, f100MHz, clover, 7, 0},
    {169, f100MHz, clover, 7, 1},
    {170, f100MHz, clover, 7, 2},
    {171, f100MHz, clover, 7, 3},
    {172, f000MHz, unused, 0, 0},
    {173, f000MHz, unused, 0, 0},
    {174, f000MHz, unused, 0, 0},
    {175, f000MHz, unused, 0, 0},
    {176, f000MHz, unused, 0, 0},
    {177, f000MHz, unused, 0, 0},
    {178, f000MHz, unused, 0, 0},
    {179, f000MHz, unused, 0, 0},
    {180, f000MHz, unused, 0, 0},
    {181, f000MHz, unused, 0, 0},
    {182, f000MHz, unused, 0, 0},
    {183, f000MHz, unused, 0, 0},
    {184, f000MHz, unused, 0, 0},
    {185, f000MHz, unused, 0, 0},
    {186, f000MHz, unused, 0, 0},
    {187, f000MHz, unused, 0, 0},
    {188, f000MHz, unused, 0, 0},
    {189, f000MHz, unused, 0, 0},
    {190, f000MHz, unused, 0, 0},
    {191, f000MHz, unused, 0, 0},
    {192, f100MHz, clover, 8, 0},
    {193, f100MHz, clover, 8, 1},
    {194, f100MHz, clover, 8, 2},
    {195, f100MHz, clover, 8, 3},
    {196, f100MHz, unused, 0, 0},
    {197, f100MHz, unused, 0, 0},
    {198, f100MHz, unused, 0, 0},
    {199, f100MHz, unused, 0, 0},
    {200, f100MHz, unused, 0, 0},
    {201, f100MHz, unused, 0, 0},
    {202, f100MHz, unused, 0, 0},
    {203, f100MHz, unused, 0, 0},
    {204, f100MHz, unused, 0, 0},
    {205, f100MHz, unused, 0, 0},
    {206, f100MHz, unused, 0, 0},
    {207, f100MHz, unused, 0, 0},
    {208, f000MHz, unused, 0, 0},
    {209, f000MHz, unused, 0, 0},
    {210, f000MHz, unused, 0, 0},
    {211, f000MHz, unused, 0, 0},
    {212, f000MHz, unused, 0, 0},
    {213, f000MHz, unused, 0, 0},
    {214, f000MHz, unused, 0, 0},
    {215, f000MHz, unused, 0, 0},
    {216, f000MHz, unused, 0, 0},
    {217, f000MHz, unused, 0, 0},
    {218, f000MHz, unused, 0, 0},
    {219, f000MHz, unused, 0, 0},
    {220, f000MHz, unused, 0, 0},
    {221, f000MHz, unused, 0, 0},
    {222, f000MHz, unused, 0, 0},
    {223, f000MHz, unused, 0, 0},
    {224, f500MHz, unused, 0, 0},
    {255, f500MHz, unused, 0, 0},
    {226, f500MHz, unused, 0, 0},
    {227, f500MHz, unused, 0, 0},
    {228, f500MHz, unused, 0, 0},
    {229, f500MHz, unused, 0, 0},
    {230, f500MHz, unused, 0, 0},
    {231, f500MHz, unused, 0, 0},
    {232, f500MHz, unused, 0, 0},
    {233, f500MHz, unused, 0, 0},
    {234, f500MHz, unused, 0, 0},
    {235, f500MHz, unused, 0, 0},
    {236, f500MHz, unused, 0, 0},
    {237, f500MHz, unused, 0, 0},
    {238, f500MHz, unused, 0, 0},
    {239, f500MHz, unused, 0, 0},
    {240, f000MHz, unused, 0, 0},
    {241, f000MHz, unused, 0, 0},
    {242, f000MHz, unused, 0, 0},
    {243, f000MHz, unused, 0, 0},
    {244, f000MHz, unused, 0, 0},
    {245, f000MHz, unused, 0, 0},
    {246, f000MHz, unused, 0, 0},
    {247, f000MHz, unused, 0, 0},
    {248, f000MHz, unused, 0, 0},
    {249, f000MHz, unused, 0, 0},
    {250, f000MHz, unused, 0, 0},
    {251, f000MHz, unused, 0, 0},
    {252, f000MHz, unused, 0, 0},
    {253, f000MHz, unused, 0, 0},
    {254, f000MHz, unused, 0, 0},
    {255, f000MHz, unused, 0, 0},
    {256, f000MHz, unused, 0, 0},
    {257, f000MHz, unused, 0, 0},
    {258, f000MHz, unused, 0, 0},
    {259, f000MHz, unused, 0, 0},
    {260, f000MHz, unused, 0, 0},
    {261, f000MHz, unused, 0, 0},
    {262, f000MHz, unused, 0, 0},
    {263, f000MHz, unused, 0, 0},
    {264, f000MHz, unused, 0, 0},
    {265, f000MHz, unused, 0, 0},
    {266, f000MHz, unused, 0, 0},
    {267, f000MHz, unused, 0, 0},
    {268, f000MHz, unused, 0, 0},
    {269, f000MHz, unused, 0, 0},
    {270, f000MHz, unused, 0, 0},
    {271, f000MHz, unused, 0, 0},
    {272, f000MHz, unused, 0, 0},
    {273, f000MHz, unused, 0, 0},
    {274, f000MHz, unused, 0, 0},
    {275, f000MHz, unused, 0, 0},
    {276, f000MHz, unused, 0, 0},
    {277, f000MHz, unused, 0, 0},
    {278, f000MHz, unused, 0, 0},
    {279, f000MHz, unused, 0, 0},
    {280, f000MHz, unused, 0, 0},
    {281, f000MHz, unused, 0, 0},
    {282, f000MHz, unused, 0, 0},
    {283, f000MHz, unused, 0, 0},
    {284, f000MHz, unused, 0, 0},
    {285, f000MHz, unused, 0, 0},
    {286, f000MHz, unused, 0, 0},
    {287, f000MHz, unused, 0, 0},
    {288, f000MHz, unused, 0, 0},
    {289, f000MHz, unused, 0, 0},
    {290, f000MHz, unused, 0, 0},
    {291, f000MHz, unused, 0, 0},
    {292, f000MHz, unused, 0, 0},
    {293, f000MHz, unused, 0, 0},
    {294, f000MHz, unused, 0, 0},
    {295, f000MHz, unused, 0, 0},
    {296, f000MHz, unused, 0, 0},
    {297, f000MHz, unused, 0, 0},
    {298, f000MHz, unused, 0, 0},
    {299, f000MHz, unused, 0, 0},
    {300, f000MHz, unused, 0, 0},
    {301, f000MHz, unused, 0, 0},
    {302, f000MHz, unused, 0, 0},
    {303, f000MHz, unused, 0, 0},
    {304, f000MHz, unused, 0, 0},
    {305, f000MHz, unused, 0, 0},
    {306, f000MHz, unused, 0, 0},
    {307, f000MHz, unused, 0, 0},
    {308, f000MHz, unused, 0, 0},
    {309, f000MHz, unused, 0, 0},
    {310, f000MHz, unused, 0, 0},
    {311, f000MHz, unused, 0, 0},
    {312, f000MHz, unused, 0, 0},
    {313, f000MHz, unused, 0, 0},
    {314, f000MHz, unused, 0, 0},
    {315, f000MHz, unused, 0, 0},
    {316, f000MHz, unused, 0, 0},
    {317, f000MHz, unused, 0, 0},
    {318, f000MHz, unused, 0, 0},
    {319, f000MHz, unused, 0, 0},
    {320, f500MHz, labr_3x8, 0, 0},
    {321, f500MHz, labr_3x8, 1, 0},
    {322, f500MHz, labr_3x8, 2, 0},
    {323, f500MHz, labr_3x8, 3, 0},
    {324, f500MHz, unused, 0, 0},
    {325, f500MHz, unused, 0, 0},
    {326, f500MHz, labr_3x8, 4, 0},
    {327, f500MHz, labr_3x8, 5, 0},
    {328, f500MHz, labr_2x2, 0, 0},
    {329, f500MHz, labr_2x2, 1, 0},
    {330, f500MHz, labr_2x2, 2, 0},
    {331, f500MHz, labr_2x2, 3, 0},
    {332, f500MHz, labr_2x2, 4, 0},
    {333, f500MHz, labr_2x2, 5, 0},
    {334, f500MHz, unused, 0, 0},
    {335, f500MHz, unused, 0, 0},
    {336, f000MHz, unused, 0, 0},
    {337, f000MHz, unused, 0, 0},
    {338, f000MHz, unused, 0, 0},
    {339, f000MHz, unused, 0, 0},
    {340, f000MHz, unused, 0, 0},
    {341, f000MHz, unused, 0, 0},
    {342, f000MHz, unused, 0, 0},
    {343, f000MHz, unused, 0, 0},
    {344, f000MHz, unused, 0, 0},
    {345, f000MHz, unused, 0, 0},
    {346, f000MHz, unused, 0, 0},
    {347, f000MHz, unused, 0, 0},
    {348, f000MHz, unused, 0, 0},
    {349, f000MHz, unused, 0, 0},
    {350, f000MHz, unused, 0, 0},
    {351, f000MHz, unused, 0, 0},
    {352, f100MHz, de_sect, 0, 0},
    {353, f100MHz, de_sect, 1, 0},
    {354, f100MHz, de_sect, 2, 0},
    {355, f100MHz, de_sect, 3, 0},
    {356, f100MHz, de_sect, 4, 0},
    {357, f100MHz, de_sect, 5, 0},
    {358, f100MHz, de_sect, 6, 0},
    {359, f100MHz, de_sect, 7, 0},
    {360, f100MHz, de_sect, 8, 0},
    {361, f100MHz, de_sect, 9, 0},
    {362, f100MHz, de_sect, 10, 0},
    {363, f100MHz, de_sect, 11, 0},
    {364, f100MHz, de_sect, 12, 0},
    {365, f100MHz, de_sect, 13, 0},
    {366, f100MHz, de_sect, 14, 0},
    {367, f100MHz, de_sect, 15, 0},
    {368, f000MHz, unused, 0, 0},
    {369, f000MHz, unused, 0, 0},
    {370, f000MHz, unused, 0, 0},
    {371, f000MHz, unused, 0, 0},
    {372, f000MHz, unused, 0, 0},
    {373, f000MHz, unused, 0, 0},
    {374, f000MHz, unused, 0, 0},
    {375, f000MHz, unused, 0, 0},
    {376, f000MHz, unused, 0, 0},
    {377, f000MHz, unused, 0, 0},
    {378, f000MHz, unused, 0, 0},
    {379, f000MHz, unused, 0, 0},
    {380, f000MHz, unused, 0, 0},
    {381, f000MHz, unused, 0, 0},
    {382, f000MHz, unused, 0, 0},
    {383, f000MHz, unused, 0, 0},
    {384, f100MHz, de_ring, 14, 0},
    {385, f100MHz, de_ring, 12, 0},
    {386, f100MHz, de_ring, 10, 0},
    {387, f100MHz, de_ring, 8, 0},
    {388, f100MHz, de_ring, 6, 0},
    {389, f100MHz, de_ring, 4, 0},
    {390, f100MHz, de_ring, 2, 0},
    {391, f100MHz, de_ring, 1, 0},
    {392, f100MHz, de_ring, 0, 0},
    {393, f100MHz, de_ring, 3, 0},
    {394, f100MHz, de_ring, 5, 0},
    {395, f100MHz, de_ring, 7, 0},
    {396, f100MHz, de_ring, 9, 0},
    {397, f100MHz, de_ring, 11, 0},
    {398, f100MHz, de_ring, 13, 0},
    {399, f100MHz, de_ring, 15, 0},
    {400, f000MHz, unused, 0, 0},
    {401, f000MHz, unused, 0, 0},
    {402, f000MHz, unused, 0, 0},
    {403, f000MHz, unused, 0, 0},
    {404, f000MHz, unused, 0, 0},
    {405, f000MHz, unused, 0, 0},
    {406, f000MHz, unused, 0, 0},
    {407, f000MHz, unused, 0, 0},
    {408, f000MHz, unused, 0, 0},
    {409, f000MHz, unused, 0, 0},
    {410, f000MHz, unused, 0, 0},
    {411, f000MHz, unused, 0, 0},
    {412, f000MHz, unused, 0, 0},
    {413, f000MHz, unused, 0, 0},
    {414, f000MHz, unused, 0, 0},
    {415, f000MHz, unused, 0, 0},
    {416, f100MHz, de_ring, 16, 0},
    {417, f100MHz, de_ring, 18, 0},
    {418, f100MHz, de_ring, 20, 0},
    {419, f100MHz, de_ring, 22, 0},
    {420, f100MHz, de_ring, 24, 0},
    {421, f100MHz, de_ring, 26, 0},
    {422, f100MHz, de_ring, 28, 0},
    {423, f100MHz, de_ring, 30, 0},
    {424, f100MHz, de_ring, 32, 0},
    {425, f100MHz, de_ring, 34, 0},
    {426, f100MHz, de_ring, 36, 0},
    {427, f100MHz, de_ring, 38, 0},
    {428, f100MHz, de_ring, 40, 0},
    {429, f100MHz, de_ring, 42, 0},
    {430, f100MHz, de_ring, 44, 0},
    {431, f100MHz, de_ring, 46, 0},
    {432, f000MHz, unused, 0, 0},
    {433, f000MHz, unused, 0, 0},
    {434, f000MHz, unused, 0, 0},
    {435, f000MHz, unused, 0, 0},
    {436, f000MHz, unused, 0, 0},
    {437, f000MHz, unused, 0, 0},
    {438, f000MHz, unused, 0, 0},
    {439, f000MHz, unused, 0, 0},
    {440, f000MHz, unused, 0, 0},
    {441, f000MHz, unused, 0, 0},
    {442, f000MHz, unused, 0, 0},
    {443, f000MHz, unused, 0, 0},
    {444, f000MHz, unused, 0, 0},
    {445, f000MHz, unused, 0, 0},
    {446, f000MHz, unused, 0, 0},
    {447, f000MHz, unused, 0, 0},
    {448, f100MHz, de_ring, 17, 0},
    {449, f100MHz, de_ring, 19, 0},
    {450, f100MHz, de_ring, 21, 0},
    {451, f100MHz, de_ring, 23, 0},
    {452, f100MHz, de_ring, 25, 0},
    {453, f100MHz, de_ring, 27, 0},
    {454, f100MHz, de_ring, 29, 0},
    {455, f100MHz, de_ring, 31, 0},
    {456, f100MHz, de_ring, 33, 0},
    {457, f100MHz, de_ring, 35, 0},
    {458, f100MHz, de_ring, 37, 0},
    {459, f100MHz, de_ring, 39, 0},
    {460, f100MHz, de_ring, 41, 0},
    {461, f100MHz, de_ring, 43, 0},
    {462, f100MHz, de_ring, 45, 0},
    {463, f100MHz, de_ring, 47, 0},
    {464, f000MHz, unused, 0, 0},
    {465, f000MHz, unused, 0, 0},
    {466, f000MHz, unused, 0, 0},
    {467, f000MHz, unused, 0, 0},
    {468, f000MHz, unused, 0, 0},
    {469, f000MHz, unused, 0, 0},
    {470, f000MHz, unused, 0, 0},
    {471, f000MHz, unused, 0, 0},
    {472, f000MHz, unused, 0, 0},
    {473, f000MHz, unused, 0, 0},
    {474, f000MHz, unused, 0, 0},
    {475, f000MHz, unused, 0, 0},
    {476, f000MHz, unused, 0, 0},
    {477, f000MHz, unused, 0, 0},
    {478, f000MHz, unused, 0, 0},
    {479, f000MHz, unused, 0, 0},
    {480, f100MHz, eDet, 0, 0},
    {481, f100MHz, eDet, 1, 0},
    {482, f100MHz, eDet, 2, 0},
    {483, f100MHz, eDet, 3, 0},
    {484, f100MHz, eDet, 4, 0},
    {485, f100MHz, eDet, 5, 0},
    {486, f100MHz, eDet, 6, 0},
    {487, f100MHz, eDet, 7, 0},
    {488, f100MHz, eDet, 8, 0},
    {489, f100MHz, eDet, 9, 0},
    {490, f100MHz, eDet, 10, 0},
    {491, f100MHz, eDet, 11, 0},
    {492, f100MHz, eDet, 12, 0},
    {493, f100MHz, eDet, 13, 0},
    {494, f100MHz, eDet, 14, 0},
    {495, f100MHz, eDet, 15, 0},
    {496, f000MHz, unused, 0, 0},
    {497, f000MHz, unused, 0, 0},
    {498, f000MHz, unused, 0, 0},
    {499, f000MHz, unused, 0, 0},
    {500, f000MHz, unused, 0, 0},
    {501, f000MHz, unused, 0, 0},
    {502, f000MHz, unused, 0, 0},
    {503, f000MHz, unused, 0, 0},
    {504, f000MHz, unused, 0, 0},
    {505, f000MHz, unused, 0, 0},
    {506, f000MHz, unused, 0, 0},
    {507, f000MHz, unused, 0, 0},
    {508, f000MHz, unused, 0, 0},
    {509, f000MHz, unused, 0, 0},
    {510, f000MHz, unused, 0, 0},
    {511, f000MHz, unused, 0, 0},
    {512, f100MHz, unused, 0, 0},
    {513, f100MHz, unused, 0, 0},
    {514, f100MHz, unused, 0, 0},
    {515, f100MHz, unused, 0, 0},
    {516, f100MHz, unused, 0, 0},
    {517, f100MHz, unused, 0, 0},
    {518, f100MHz, unused, 0, 0},
    {519, f100MHz, unused, 0, 0},
    {520, f100MHz, unused, 0, 0},
    {521, f100MHz, unused, 0, 0},
    {522, f100MHz, unused, 0, 0},
    {523, f100MHz, unused, 0, 0},
    {524, f100MHz, unused, 0, 0},
    {525, f100MHz, unused, 0, 0},
    {526, f100MHz, unused, 0, 0},
    {527, f100MHz, unused, 0, 0},
    {528, f000MHz, unused, 0, 0},
    {529, f000MHz, unused, 0, 0},
    {530, f000MHz, unused, 0, 0},
    {531, f000MHz, unused, 0, 0},
    {532, f000MHz, unused, 0, 0},
    {533, f000MHz, unused, 0, 0},
    {534, f000MHz, unused, 0, 0},
    {535, f000MHz, unused, 0, 0},
    {536, f000MHz, unused, 0, 0},
    {537, f000MHz, unused, 0, 0},
    {538, f000MHz, unused, 0, 0},
    {539, f000MHz, unused, 0, 0},
    {540, f000MHz, unused, 0, 0},
    {541, f000MHz, unused, 0, 0},
    {542, f000MHz, unused, 0, 0},
    {543, f000MHz, unused, 0, 0},
    {544, f000MHz, unused, 0, 0},
};


DetectorInfo_t GetDetector(uint16_t address)
{
    return (address < TOTAL_NUMBER_OF_ADDRESSES) ? pDetector[address] : pDetector[0];
}

enum ADCSamplingFreq GetSamplingFrequency(uint16_t address)
{
    return (address < TOTAL_NUMBER_OF_ADDRESSES) ? pDetector[address].sfreq : f000MHz;
}

#ifdef __cplusplus
}
#endif // __cplusplus
