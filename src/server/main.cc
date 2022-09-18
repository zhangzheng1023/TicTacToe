/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#include "../../include/locker.h"
#include "../../include/player.h" 

int main() {
    //Locker m_lock;
    Player p1;
    vector<int8_t> test = { 0, 0, 0, 0, 1, 2, 0, 1 };
    p1.showBoard(test);
    return 0;
}