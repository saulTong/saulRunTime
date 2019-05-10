//
//  CFPerson.m
//  5NSObject常用方法解析
//
//  Created by GongCF on 2018/9/9.
//  Copyright © 2018年 GongCF. All rights reserved.
//

#import "CFPerson.h"

@implementation CFPerson
//吃东西
- (void)eatingWithFood:(NSString*)foodName inPlace:(NSString*)placeName;
{
    NSLog(@"Person eatingWithFood:%@ inPlace:%@！",foodName,placeName);
}

//玩耍
- (void)playing
{
    NSLog(@"Person playing！");
}

//睡觉
+ (void)sleeping
{
    NSLog(@"Person sleeping！");
}

@end
