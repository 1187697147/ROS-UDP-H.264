#ifndef _H_ROS_H264_DECODER_H_
#define _H_ROS_H264_DECODER_H_

#include <h264_api.h>

#include <sensor_msgs/Image.h>

struct H264DecoderImpl;

class H264_API H264Decoder
{
public:
    H264Decoder(int width, int height);

    /* Decode data into a sensor_msgs::ImagePtr, the header is untouched */
    int decode(int frame_size, uint8_t *frame_data, sensor_msgs::ImagePtr &out);

private:
    boost::shared_ptr<H264DecoderImpl> impl;
};

#endif
