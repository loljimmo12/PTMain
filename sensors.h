#ifndef SENSOR_H
#define SENSOR_H

int sns_sensor_run(pthread_t *thread, mn_core_data *data);
char sns_mpu_init(int mpuRate, int lpf);

#endif
