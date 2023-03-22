#include <stdio.h>
struct timeFun {
    int hour;
    int minute;
    int sec;
};
struct timeFun add_Time (struct timeFun t1, struct timeFun t2){
    struct timeFun t3;
    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;
    if (t3.minute >= 60){
        t3.hour++;
        t3.minute -= 60;
    }
    t3.sec = t1.sec + t2.sec;
    if (t3.sec >= 60){
        t3.minute++;
        t3.sec-=60;
    }
    return t3;
}

void display_Time(struct timeFun t){
    printf("%d : %d : %d\n", t.hour, t.minute, t.sec);
}

int main(void){
    struct timeFun t1, t2, t3;

    t1.hour = 10;
    t1.minute = 53;
    t1.sec = 34;
    display_Time(t1);

    t2.hour = 6;
    t2.minute = 17;
    t2.sec = 43;
    display_Time(t2);

    t3 = add_Time(t1, t2);
    display_Time(t3);
    return 0;
}