typedef struct imu_data
{
    float acc_x;
    float acc_y;
    float acc_z;

    float gyro_x;
    float gyro_y;
    float gyro_z;
} IMU_Data_S;

void read_imu_data(IMU_Data_S* imu);