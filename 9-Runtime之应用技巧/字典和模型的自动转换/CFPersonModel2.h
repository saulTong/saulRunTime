//
//  CFPersonModel2.h
//  2字典和模型的自动转换
//
//  Created by GongCF on 2018/9/16.
//  Copyright © 2018年 GongCF. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "CFBaseModel.h"
#import "CFStudentModel.h"
@interface CFPersonModel2 : CFBaseModel
@property(nonatomic,copy)NSString *name;
@property(strong,nonatomic)CFStudentModel *student;
@end
