/* *********************
 * @Author Z.Zhang
 * @CreateTime 2022/9/18
 * *********************/

#ifndef LOCKER_H
#define LOCKER_H

#include <pthread.h>
#include<exception>

class Locker{
public:
    Locker();
    ~Locker();

    
    bool lock();
    bool unlock();

    pthread_mutex_t *get();

private:
    pthread_mutex_t m_mutex;
};

#endif
