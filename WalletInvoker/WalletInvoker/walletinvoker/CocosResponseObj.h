#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CocosRespResult) {
    CocosRespResultCanceled = 0,
    CocosRespResultSuccess,
    CocosRespResultFailure,
};

@interface CocosResponseObj : NSObject

@property (nonatomic, assign) CocosRespResult result;
@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, weak) id data;

@end

NS_ASSUME_NONNULL_END
