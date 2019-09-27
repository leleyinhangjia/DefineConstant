//
//  UIDateString.h
//  FlycPiano
//
//  Created by leleyinhangjia on 2018/1/23.
//  Copyright © 2018年 Flyc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIDateString : NSObject
#pragma mark 比较两个日期大小(时间早晚)
+ (NSInteger)compareDate:(NSString*)startDate withDate:(NSString*)endDate;
/**只算小时和分钟 HH:mm **/
+ (NSString *)dateStringWithHouseAndSecond:(NSString *)dateStr;
/* YYYY-MM-dd EEE HH:mm */
+(NSString *)dateString:(NSString *)dateStr;
/**EEE**/
+(NSString *)dateWeekString:(NSString *)dateStr;
/**MM-dd**/
+(NSString *)dateMonthAndDayString:(NSString *)dateStr;
/** yyyy-MM-dd HH:mm -----  MM-dd **/
+(NSString *)dateNewMonthAndDayString:(NSString *)dateStr;
/** yyyy-MM-dd HH:mm -----  yyyy **/
+(NSString *)dateAndYearString:(NSString *)dateStr;
/** yyyy-MM-dd HH:mm -----  yyyy-MM-dd 新增**/
+(NSString *)dateAndYearAndMonthAndDayString:(NSString *)dateStr;
/**获取当前时间**/
+(NSString*)getCurrentTimes;
/**获取周数 周日-周六 (国外日历)**/
+(NSString *)obtainCurrentDateAndUpdateInterface:(NSString *)datestring;

/****获取当前的时间 YYYY-MM-dd HH:mm****/
+(NSString*)getCurrentTimesYearAndMonthAndDayAndHoursAndSecond;

//获取当前的时间 只展示时间HH
+(NSString*)getCurrentTimesHH;

//获取当前的时间 YYYY-MM-dd HH:mm:ss
+(NSString*)getCurrentTimesYYYYMMddHHmmss ;
//获取当前的时间 YYYY-MM-dd HH:mm --- HH:mm
+(NSString *)dateHoursAndMinuesString:(NSString *)dateStr;

+ (NSString *)getCurrentWeek;
#pragma mark 获取当前第一天日期(周日)
+ (NSString *)obtainCurrentDateSunday:(NSString *)sundayString;
/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周一)
+ (NSString *)obtainCurrentDateMonday:(NSString *)mondayString ;
/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周二)
+ (NSString *)obtainCurrentDateTuesday:(NSString *)TuesdayString;
/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周三)
+ (NSString *)obtainCurrentDateWenday:(NSString *)WendayString;
/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周四)
+ (NSString *)obtainCurrentDateThursday:(NSString *)ThursdayString;
/**获取周数 周日-周六 (国外日历)**/
#pragma mark 获取当前第一天日期(周五)
+ (NSString *)obtainCurrentDateFriday:(NSString *)FridayString;
#pragma mark 获取当前第后天日期(周六)
+ (NSString *)obtainCurrentDateSaturday:(NSString *)SaturdayString;
@end
