//
//  main.cpp
//  test
//
//  Created by 郭悟清 on 2017/3/12.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
class location
{
public:
    double lat;
    double lon;
    location(double latin,double lonin)
    {
        lat=latin;
        lon=lonin;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    location loc1(39.9,116.4);
    location loc2(55.8,37.6);
    loc1=loc2;
    loc1.lat=-8.3;
    printf("%f,%f",loc2.lat,loc2.lon);
    location *loc3=new location(39.9,116.4);
    location *loc4=new location(55.8,37.6);
    loc3=loc4;
    printf("%f,%F",loc4->lat,loc4->lon);
    delete loc3;
    delete loc4;
    return 0;
}
