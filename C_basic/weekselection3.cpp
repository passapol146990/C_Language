#include <stdio.h>
int main()
{
    int people,lenght,width,loop;
    // ความยาวของสนามมี 100 300 500 600 นำไปหา 3 ใน5 จะได้ความกว้าง
    printf("Enter people :");
    scanf(" %d",&people);
    // เช็คตามเงื่อนไข เพื่อหาความยาวและจำนวนรอบในการวิ่ง
    if(people < 10)
    {
        lenght = 100;
        loop = 1;
    }
    else if (people < 20)
        {
            lenght = 300;
            loop = 2;
        }
        else if (people < 50)
            {
                lenght = 500;
                loop = 3;
            }
            else
                {
                    lenght = 600;
                    loop = 4;
                }
    int round,distance,km,m;
    //  3 ใน  5  ของความยาว จะได้ความกว้าง
    width = lenght*3/5;
    // หาพื้นทีรอบสนามทั้งหมด
    round = width*2 + lenght*2;
    // หาระยะทางที่ทหารวิ่งทั้งหมด เมตร ระยะรอบสนาม * จำนวนรอบที่วิ่ง
    distance = round * loop;
    // แปลงเป็น กิโลเมตร
    km = (distance-distance%1000)/1000;
    m = distance-km*1000;
    // แสดงผล
    printf("%d Km %d m",km,m);
    return 0;
}
