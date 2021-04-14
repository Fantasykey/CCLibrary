/*
 * @Description: 
 * @Author: chenhf
 * @Date: 2021-04-13 09:53:51
 * @LastEditTime: 2021-04-14 10:18:20
 * @LastEditors: chenhf
 */
#ifndef WR_DEVICE_H
#define WR_DEVICE_H

// for write and read data 
class WRDevice {
public:
	WRDevice() {}
	virtual ~WRDevice() {}

	virtual int Write(void *data) = 0;
	virtual int Read(void *data) = 0;
};

#endif /* WR_DEVICE_H */