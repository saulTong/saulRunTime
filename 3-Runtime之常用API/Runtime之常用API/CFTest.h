//
//  CFTest.h
//  Runtime之常用API
//
//  Created by GongCF on 2018/9/13.
//  Copyright © 2018年 GongCF. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CFTest : NSObject
- (void)dynamicMethod;

- (void)eatingWithFood:(NSString *)foodName inPlace:(NSString*)placeName;
@end
