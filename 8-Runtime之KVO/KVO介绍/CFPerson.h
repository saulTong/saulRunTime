//
//  CFPerson.h
//  KVO介绍
//
//  Created by GongCF on 2018/9/13.
//  Copyright © 2018年 GongCF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CFFather.h"
@interface CFPerson : NSObject
@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)CFFather *father;
@end
