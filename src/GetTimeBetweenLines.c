#include <ctime>

struct 
{   
    unsigned t0,t1;

    void initMarkGetTime(){ t0 = clock();}

    void finishMarkGetTime(){ t1 = clock();}

    double getTotalTimeMark()
    {  
        return (double(t1 - t0)/CLOCKS_PER_SEC);
    }

}timer;




