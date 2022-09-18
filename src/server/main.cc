/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#include "locker.h"
#include <iostream>

int main() {
    Locker m_lock;

    if (m_lock.lock()) std::cout << 1232 << std::endl;
    m_lock.unlock();
    if (m_lock.lock()) std::cout << 99900 << std::endl;

    return 0;
}