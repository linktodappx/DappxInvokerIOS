#import "CocosRequestObj.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void CocosApiLinkObjCategoryFile(void);

@interface CocosRequestObj (Private)

- (NSDictionary *)cocos_toJSONObject;

@end

NS_ASSUME_NONNULL_END
