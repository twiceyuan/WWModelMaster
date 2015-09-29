//
//  jsonModel.h
//  WWModelMaster
//
//  Created by 歪歪 on 15/9/29.
//  Copyright © 2015年 歪歪. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  所有的jsonModel都应该实现这个Protocol
 */
@protocol JsonModelProtocol <NSObject, NSCopying, NSMutableCopying>

@required
/**
 *  根据dictionary初始化model
 *
 *  @param dictionary 设置参数字典,json结构;
 *
 *  @return model对象
 */
-(instancetype) initWithDictionary:(NSDictionary*)dictionary;

/**
 *  根据nsdata 初始化model
 *
 *  @param data json格式NSData
 *
 *  @return model对象
 */
-(instancetype) initWithData:(NSData*)data;

/**
 *  根据json String 初始化model
 *
 *  @param string json String
 *
 *  @return model对象
 */
-(instancetype) initWithJsonString:(NSString *)string;

/**
 *  model对象转字典
 *
 *  @return 结果NSDictionary
 */
-(NSDictionary*) toDictionary;

-(NSDictionary*) toDictionaryWithKeys:(NSArray*)propertyNames;

/**
 *  model对象转NSData
 *
 *  @return 结果NSData
 */
-(NSData *) toData;

-(NSData *) toDataWithKeys:(NSArray*)propertyNames;

/**
 *  model对象转json String
 *
 *  @return json格式NSString
 */
-(NSString *) toJsonString;

-(NSString *) toJsonStringWithKeys:(NSArray*)propertyNames;
@end

@interface jsonModel : NSObject<JsonModelProtocol>

/**
 *  根据dictionary设置属性
 *
 *  @param data 属性dictionary
 */
-(void) setPropertyWithDictionary:(NSDictionary *) data;


/**
 *  输出展示model内容
 */
-(void) display;


/****************	类函数	****************/

@end
