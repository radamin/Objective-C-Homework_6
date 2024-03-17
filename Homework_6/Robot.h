//
//  Robot.h
//  Homework_6
//
//  Created by Рамазан Даминов on 17.03.2024.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface Robot : NSObject<NSCoding>

@property (nonatomic) NSString *name;
@property (nonatomic) CGPoint point;

//@property (nonatomic, assign) float x;
//@property (nonatomic, assign) float y;

- (instancetype) initWithName: (NSString *)currentName andPoint: (CGPoint)currentPoint;

@end

NS_ASSUME_NONNULL_END
