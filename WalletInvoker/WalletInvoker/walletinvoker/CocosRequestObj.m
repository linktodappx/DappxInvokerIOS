#import "CocosRequestObj.h"

NSString *const kCocosSDKActionLogin = @"login";
NSString *const kCocosSDKActionTransfer = @"transfer";
NSString *const kCocosSDKActionCallContract = @"callcontract";
NSString *const kCocosSDKActionSignString = @"sign";

@implementation CocosRequestObj

- (instancetype)init {
    if (self = [super init]) {
        _protocol = @"CocosBCXWallet";
        _version = @"1.0.1";
        if ([self isKindOfClass:CocosLoginObj.class]) {
            _action = kCocosSDKActionLogin;
        }else if ([self isKindOfClass:CocosTransferObj.class]) {
            _action = kCocosSDKActionTransfer;
        }else if ([self isKindOfClass:CocosCallContractObj.class]) {
            _action = kCocosSDKActionCallContract;
        }else if ([self isKindOfClass:CocosSignStringObj.class]) {
            _action = kCocosSDKActionSignString;
        }
    }
    return self;
}
@end

#pragma mark - CocosLoginObj -

@implementation CocosLoginObj

@end

#pragma mark - CocosTransferObj -

@implementation CocosTransferObj

@end

#pragma mark - CocosCallContractObj -

@implementation CocosCallContractObj

@end


#pragma mark - CocosSignStringObj -

@implementation CocosSignStringObj

@end
