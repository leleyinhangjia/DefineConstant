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
#define SocialCreditNUM  @"^([0-9ABCDEFGHJKLMNPQRTUWXY]{2})([0-9]{6})([0-9ABCDEFGHJKLMNPQRTUWXY]{9})([0-9Y])$"
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

// 判断 iPad
#define DX_UI_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// 判断iPhone X
#define DX_Is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

//判断iPHoneXr | 11
#define DX_Is_iPhoneXR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//判断iPHoneXs | 11Pro
#define DX_Is_iPhoneXS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//判断iPhoneXs Max | 11ProMax
#define DX_Is_iPhoneXS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//判断iPhone12_Mini
#define DX_Is_iPhone12_Mini ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1080, 2340), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//判断iPhone12 | 12Pro
#define DX_Is_iPhone12 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1170, 2532), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//判断iPhone12 Pro Max
#define DX_Is_iPhone12_ProMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1284, 2778), [[UIScreen mainScreen] currentMode].size) && !DX_UI_IS_IPAD : NO)

//x系列
#define IS_iPhoneXStyle (DX_Is_iPhoneX || DX_Is_iPhoneXR || DX_Is_iPhoneXS || DX_Is_iPhoneXS_MAX || DX_Is_iPhone12_Mini || DX_Is_iPhone12 || DX_Is_iPhone12_ProMax)

//状态栏的高度
#define HitoStatusBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height)
//导航栏的高度
#define HitoNavBarHeight ((DX_Is_iPhoneXR) ? 48.0:((DX_Is_iPhone12 || DX_Is_iPhone12_ProMax) ? 47.0:44.0))

//iphoneX-SafeArea的高度
#define HitoSafeAreaHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?34:0)
//分栏+iphoneX-SafeArea的高度
#define HitoTabBarHeight (49+HitoSafeAreaHeight)
//导航栏+状态栏的高度
#define HitoTopHeight (HitoStatusBarHeight + HitoNavBarHeight)

#define kScale(P)   ((P) * ([UIScreen mainScreen].bounds.size.width / 375.f))

#define NaviH HitoTopHeight // 812是iPhoneX的高度

#define TabbarH (IS_iPhoneXStyle ? 83 : 49)

#define effectViewH  (IS_iPhoneXStyle ? 34 : 0)

#define TopeffectViewH  (IS_iPhoneXStyle ? 44 : 0)

#define FontSize(size) [UIFont systemFontOfSize:size]

#define kSaveMyDefault(A,B) [[NSUserDefaults standardUserDefaults] setObject:B forKey:A]

#define kFetchMyDefault(A) [[NSUserDefaults standardUserDefaults] objectForKey:A]

/**所有颜色配置*/
#define kThemeColor   UIColorRGB(0x0098ed) //主题色单独定制 防止全局替换出现特定颜色有冲突

#define k0x0098edColor   UIColorRGB(0x0098ed)
#define k0xffffffColor   UIColorRGB(0xffffff)
#define k0x000000Color   UIColorRGB(0x000000)
#define k0xccccccColor   UIColorRGB(0xcccccc)
#define k0xddddddColor   UIColorRGB(0xdddddd)
#define k0x666666Color   UIColorRGB(0x666666)
#define k0x999999Color   UIColorRGB(0x999999)
#define k0xe5e5e5Color   UIColorRGB(0xe5e5e5)
#define k0xeaeaeaColor   UIColorRGB(0xe5e5e5)


#define k0xf4f4f4Color   UIColorRGB(0xf4f4f4)
#define k0xf8f8f8Color   UIColorRGB(0xf8f8f8)
#define k0xf8f8f8Color   UIColorRGB(0xf8f8f8)
#define k0xff8400Color   UIColorRGB(0xff8400)
#define k0xff6969Color   UIColorRGB(0xff6969)
#define k0xf7931eColor   UIColorRGB(0xf7931e)
#define k0xff9000Color   UIColorRGB(0xff9000)
#define k0x18c884Color   UIColorRGB(0x18c884)
#define k0xff9b48Color   UIColorRGB(0xff9b48)
#define k0xff6633Color   UIColorRGB(0xff6633)

/**所有字体配置*/
///////////文字
//#define kTextColorLight
#define kTextColorNormal    [UIColor colorWithRed:136.0f/255.0f green:136.0f/255.0f blue:136.0f/255.0f alpha:1.0f]
#define kTextColorDark      [UIColor colorWithRed:51.0f/255.0f green:51.0f/255.0f blue:51.0f/255.0f alpha:1.0f]//0X333333
#define kTextColorImport
#define kTextColorReverse
#define kTextColorLink
#define kTextColorTitle
#define kTextSizeBig         18.0*KsuitParam   //大字体，标题等
#define kTextSizeOfRarBig    17.0*KsuitParam   //大字体，标题等
#define kTextSizeBigLess     16.0*KsuitParam
#define kTextSizeMid         15.0*KsuitParam   //中等字体，列表内容等
#define kTextSizeMidLess     14.0*KsuitParam
#define kTextSizeOfRarLess   13.0*KsuitParam  //小标题存在13.0
#define kTextSizeSml         12.0*KsuitParam  //小字体，属性等
#define kTextOfCellSizeSml   11.0*KsuitParam   //cell.中小字体属性,比如(意见反馈列表,反馈时间字体)
#define kTextSizeSmlLess     10.0*KsuitParam
#define kTextSizeLess        9.0*KsuitParam
#define kTextSizeTitle

///////////字体
// swift中字体也需要使用字体名称，在UIConstants.swift文件中使用
#define sFontNameRegular    @"PingFangSC-Regular"  // 常规体字体名称
#define sFontNameMedium     @"PingFangSC-Medium"   // 中等字体名称
#define sFontNameBold       @"PingFangSC-Semibold" // 粗体字体名称
#define FontRegular(fontSize)    [UIFont fontWithName:sFontNameRegular size:fontSize]  // 常规体
#define FontMedium(fontSize)     [UIFont fontWithName:sFontNameMedium size:fontSize]   // 中等
#define FontBold(fontSize)       [UIFont fontWithName:sFontNameBold size:fontSize]     // 粗体
#define FontDINRegular(fontSize) [UIFont fontWithName:@"DIN-Regular" size:fontSize]    // DIN常规体
#define FontDINMedium(fontSize)  [UIFont fontWithName:@"DIN-Medium" size:fontSize]     // DIN中等
#define FontDINBold(fontSize)    [UIFont fontWithName:@"DIN-Bold" size:fontSize]       // DIN粗体

/**主分段标题设置  举例:考试界面(未交卷,已交卷) 字体统一 15,底部线条 16宽,2高 类似界面全部统一*/
#define lineBottomViewWidth   16
#define lineBottomViewHeight  2

//iOS 14开始，全面屏iPhone的状态栏高度不一定是44了，比如下面就是这些设备在iOS 14.1上的状态栏高度。
//设备状态栏高度
//iPhone XR/11     48
//iPhone X/11 Pro/ 11 Pro Max/12 mini     44
//iPhone 12/12 Pro/Pro Max     47

/** 打印 NSlog */

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...)
#endif

/** block 声明 */
#ifdef NS_BLOCKS_AVAILABLE
typedef void (^ZLyBasicBlock)(void);
typedef void (^ZLyOperationCallBackBlock)(BOOL isSuccess, NSString *errorMsg);
typedef void (^ZLyArrayBlock)(NSArray *list);
#endif

/**NSString转UTF8 */
#define OC(str) [NSString stringWithCString:(str) encoding:NSUTF8StringEncoding]

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

/** 去掉首尾空格和换行符 */
#define FirstAndLastSpace(str) [str stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]]
/**去掉所有空格*/
#define RemoveAllSpaces(str) [str stringByReplacingOccurrencesOfString:@" " withString:@""]

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
