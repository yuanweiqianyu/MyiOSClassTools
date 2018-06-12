//
//  NSString+Tools.h
//  baseFW
//
//  Created by 潘珍珍 on 2018/5/11.
//  Copyright © 2018年 pzz. All rights reserved.
//

#import <Foundation/Foundation.h>

/**字符串工具**/
@interface NSString (Tools)

/**
 *  清空字符串中的空白字符
 *
 *  @return 清空空白字符串之后的字符串
 **/
- (NSString *)trimString;

/**
 *  是否空字符串
 *
 *  @return 如果字符串为nil或者长度为0返回YES
 **/
- (BOOL)isEmptyString;

/**
 是否以某字符串开头
 **/
- (BOOL)isStartWithString:(NSString *)str;


/**
 *  判断是否为手机号
 **/

- (BOOL)isMobilePhone;

/**
 *  判断是否为数字
 **/

- (BOOL)isNumText;

/**
 *  是否为字母
 **/
-(BOOL)isABC;


/**
 *  判断是否为银行卡（对公账户没有用）
 **/
- (BOOL)isbankCard;


/**
 判断是否为身份证
 **/
- (BOOL)isIdCard;

/**
 ** 判断是否为邮箱
 **/
- (BOOL) isEmail;

/**
 加密算法
 **/
- (NSString *)md5;

/**匹配包含中文**/
- (BOOL)isChinese;
/**是否为中文**/
-(BOOL)inputShouldChinese;

/**九宫格输入**/
-(BOOL)isNineKeyBoard;

/**是否为emoji**/
- (BOOL)isContainsEmoji;

/**
 *  判断字符串中是否存在emoji
 * @param string 字符串
 * @return YES(含有表情)
 * 可能用到第三方键盘——主要是限制搜狗的emoji
 */
- (BOOL)hasEmoji;

/**是否为纳税人识别码**/
- (BOOL)isValidateTaxpayerNumber;


@end
