#import <UIKit/UIKit.h>
#import "CocosRequestObj.h"
#import "CocosResponseObj.h"

NS_ASSUME_NONNULL_BEGIN

@interface CocosWalletApi : NSObject

+ (void)registerAppID:(NSString *)AppID;
+ (BOOL)sendObj:(CocosRequestObj *)obj;
+ (BOOL)handleURL:(NSURL *)url
          options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options
           result:(void(^)(CocosResponseObj *respObj))result;

@end

NS_ASSUME_NONNULL_END
