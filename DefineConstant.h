//
//  DefineConstant.h
//  XibDemo
//
//  Created by leleyinhangjia on 2018/11/8.
//  Copyright © 2018 leleyinhangjia. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//判断是否为iPhone
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

//判断是否为iPad
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

//判断是否为ipod
#define IS_IPOD ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])




//取屏幕宽高的最大值
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

// 3.5英寸
#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
// 4.0英寸
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
// 4.7英寸
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
// 5.5英寸
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

/** 屏幕宽高 */
#define kScreenWidth             ([[UIScreen mainScreen] bounds].size.width)
#define kScreenHeight            ([[UIScreen mainScreen] bounds].size.height)
/**适配 iPhone X TabBar和导航区别
   * Top区别:iPhone X 为例:导航(44 points)+状态栏(44 points)= 88 points
   *        Iphone 6s为例:导航(44 points)+状态栏(20 points)= 64 points
   * Bottom区别:iPhone X 为例: 83 points高度(TabBar) = Danger Area(34 points) + 原来的49 points
   *           Iphone 6s为例:49 points高度(TabBar) = 49 points
   */
//iPhoneX / iPhoneXS
#define  isIphoneX_XS     (kScreenWidth == 375.f && kScreenHeight == 812.f ? YES : NO)
//iPhoneXR / iPhoneXSMax
#define  isIphoneXR_XSMax    (kScreenWidth == 414.f && kScreenHeight == 896.f ? YES : NO)
#define   isFullScreen    (isIphoneX_XS || isIphoneXR_XSMax)
#define  StatusBarHeight     (isFullScreen ? 44.f : 20.f)
#define  NavigationBarHeight  44.f
#define  TabbarHeight         (isFullScreen ? (49.f+34.f) : 49.f)
#define  TabbarSafeBottomHeight         (isFullScreen ? 34.f : 0.f)
#define  StatusBarAndNavigationBarHeight  (isFullScreen ? 88.f : 64.f)

/** 更新的宽布局 **/
#define updateWidth(WIDTH) WIDTH / 750.0 * [UIScreen mainScreen].bounds.size.width
/** 更新的高布局 **/
#define updateHeight(HEIGHT) HEIGHT / 1334.0 * [UIScreen mainScreen].bounds.size.height

/** 获取系统版本 */
#define IOS_SYSTEM_STRING [[UIDevice currentDevice] systemVersion]

/** 字体大小 */
#define FontSize(size) [UIFont systemFontOfSize:size]

/** 颜色RGB */
#define HSVCOLOR(h,s,v) [UIColor colorWithHue:h saturation:s value:v alpha:1]
#define HSVACOLOR(h,s,v,a) [UIColor colorWithHue:h saturation:s value:v alpha:a]

/** 16进制色值参数转换 */
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

/**定义WeakSelf**/
#define WeakSelf(weakSelf)      __weak __typeof(&*self)    weakSelf  = self;

#define ImageNamed(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

/** 用于正则式 */
#define NUM @"0123456789"
#define ALPHA @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ALPHANUM @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
/** 验证手机号及固话方法 */
#define TelephoneNUM  @"^(0[0-9]{2,3})?([2-9][0-9]{6,7})+(-[0-9]{1,4})?$|(^(13[0-9]|15[0|3|6|7|8|9]|18[8|9])\\d{8}$)"
/** 判断社会信用代码证 */
#define TelephoneNUM  @"^([0-9ABCDEFGHJKLMNPQRTUWXY]{2})([0-9]{6})([0-9ABCDEFGHJKLMNPQRTUWXY]{9})([0-9Y])$"
/** 验证手机号及固话方法 */
#define TelephoneNUM  @"^(0[0-9]{2,3})?([2-9][0-9]{6,7})+(-[0-9]{1,4})?$|(^(13[0-9]|15[0|3|6|7|8|9]|18[8|9])\\d{8}$)"
/** 工商税号 */
#define BusinessCirclesNUM  @"[0-9]\\\\d{13}([0-9]|X)$"
/** 邮政编码 */
#define CodeNUM  @"^[0-8]\\\\d{5}(?!\\\\d)$"
/** 验证身份证号（15位或18位数字) */
#define IDCardNUM  @"\\d{14}[[0-9],0-9xX]"
/** 验证Email地址 */
#define EmailNUM  @"^\\w+([-+.]\\w+)*@\\w+([-.]\\w+)*\.\\w+([-.]\\w+)*$"
/** 整数或者小数 */
#define IntAndDecimalNUM  @"^[0-9]+([.]{0,1}[0-9]+){0,1}$"
/** 验证URL */
#define URLNUM  @"^http://([\\w-]+\.)+[\\w-]+(/[\\w-./?%&=]*)?$"
/** 验证QQ */
#define QQNUM  @"[1-9][0-9]\{4,\}"
/** 匹配帐号是否合法 */
#define AccountLegalityNUM  @"^[a-zA-Z][a-zA-Z0-9_]{4,15}$"
/** 只能输入汉字 */
#define ChineseCharactersNUM  @"^[\u4e00-\u9fa5]{0,}$"
/** 匹配空白行的正则表达式 */
#define SpaceNUM  @"^\n\s*\r"


/** 系统版本 */
#define IOS11_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define IOS10_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define IOS9_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define IOS8_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define IOS7_OR_LATER  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)

/** 打印 NSlog */
#ifdef DEBUGLOG
#       define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#       define DLog(...)
#endif


/** 弹出提示框 UIAlertView */
#define showMessageView(__MESSAGE__) \
UIAlertView *alertView_ = [[UIAlertView alloc] initWithTitle:@"提示" \
message:__MESSAGE__ \
delegate:nil \
cancelButtonTitle:@"确定" \
otherButtonTitles:nil]; \
[alertView_ show];


/** 弹出提示框 UIAlertController */
#define showMessageController(MESSAGE,VC) \
UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:MESSAGE preferredStyle:UIAlertControllerStyleAlert]; \
UIAlertAction *action = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]; \
[alertController addAction:action]; \
[VC presentViewController:alertController animated:YES completion:nil]


/**是否为空或是[NSNull null] */
#define NotNilAndNull(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]))
#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))
/** 字符串是否为空 */
#define IsStrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]))
/** 数组是否为空 */
#define IsArrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref) count] == 0))


/** 便捷方式创建NSNumber类型 */
#undef    __INT
#define __INT( __x )            [NSNumber numberWithInt:(NSInteger)__x]

#undef    __UINT
#define __UINT( __x )            [NSNumber numberWithUnsignedInt:(NSUInteger)__x]

#undef    __FLOAT
#define    __FLOAT( __x )            [NSNumber numberWithFloat:(float)__x]

#undef    __DOUBLE
#define    __DOUBLE( __x )            [NSNumber numberWithDouble:(double)__x]

/** 便捷创建NSString */
#undef  STR_FROM_INT
#define STR_FROM_INT( __x )     [NSString stringWithFormat:@"%d", (__x)]

/** 线程执行方法 */
#define Foreground_Begin  dispatch_async(dispatch_get_main_queue(), ^{
#define Foreground_End    });

#define Background_Begin  dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{\
@autoreleasepool {
#define Background_End          }\
});

/** 通过字典的key 获取value (判断转换为)NSString */
extern NSString* EncodeStringFromDic(NSDictionary *dic, NSString *key);
/** 通过字典的key 获取value (判断转换为)NSNumber */
extern NSNumber* EncodeNumberFromDic(NSDictionary *dic, NSString *key);
extern NSDictionary *EncodeDicFromDic(NSDictionary *dic, NSString *key);
extern NSArray      *EncodeArrayFromDic(NSDictionary *dic, NSString *key);
extern NSArray      *EncodeArrayFromDicUsingParseBlock(NSDictionary *dic, NSString *key, id(^parseBlock)(NSDictionary *innerDic));


/** 单例创建 */
#undef    AS_SINGLETON
#define AS_SINGLETON( __class ) \
+ (__class *)sharedInstance;

#undef    DEF_SINGLETON
#define DEF_SINGLETON( __class ) \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once( &once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}


NS_ASSUME_NONNULL_END
