#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - CocosRequestObj

@interface CocosRequestObj : NSObject

@property (nonatomic, copy, readonly) NSString *protocol;
@property (nonatomic, copy, readonly) NSString *version;
@property (nonatomic, copy, readonly) NSString *action;
@property (nonatomic, copy) NSString *dappName;
@property (nonatomic, copy) NSString *dappIcon;
@property (nonatomic, copy) NSString *actionId;
@property (nonatomic, copy) NSNumber *expired;
@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *callbackSchema;
@end

#pragma mark - CocosLoginObj -

@interface CocosLoginObj : CocosRequestObj

@end

#pragma mark - CocosTransferObj -

@interface CocosTransferObj : CocosRequestObj

@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *to;
@property (nonatomic, copy) NSString *amount;
@property (nonatomic, copy) NSString *symbol;
@property (nonatomic, copy) NSString *memo;
@end

#pragma mark - CocosCallContractObj -

@interface CocosCallContractObj : CocosRequestObj

@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *contract;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, strong) NSArray *param;
@end


#pragma mark - CocosSignStringObj -

@interface CocosSignStringObj : CocosRequestObj

@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *signContent;
@end

NS_ASSUME_NONNULL_END
