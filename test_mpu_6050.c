#include<stdio.h>
#include"include/mpu_6050.h"

IMU_Data_S data;

int main()
{
    printf("\nThis is from the main function...\n");
    read_imu_data(&data);
    return 0;
}