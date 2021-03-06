## iOS CocosWallet SDK Access Documentation

### Instructions & Support
- This SDK is used to pull up the Dappx Client and complete the interaction between Dapp and Dappx Client for related action operations.

- Examples Reference Case Walletinvoker Project

### 1. Drag the walletinvoker folder from the Walletinvoker project into your project manually

### 2. Configure URL Schemes,
	- In order for Dappx Client to call back data to its App

- Open the info.plist configuration as follows: (taking dappdemo as an example)

![](./image/URL Schemes.png)


### 3. Initialization
- Initialize in AppDelegate.m file
	- Reference header file #import "CocosWalletApi.h"

- Register URL Schemes in the method `application: didFinishLaunchingWithOptions`
	- [CocosWalletApi registerAppID:@"dappdemo"];

### APIs

#### 1. Authorized Login (CocosLoginObj)

```objc
     CocosLoginObj *loginObj = [[CocosLoginObj alloc] init];
    loginObj.dappIcon = @"https://ss3.bdstatic.com/70cFv8Sh_Q1YnxGkpoWK1HF6hhy/it/u=1552892908,1688888225&fm=26&gp=0.jpg";
    loginObj.dappName = @"Dapp Test";
    loginObj.desc = @"Description of the requested login";
    [CocosWalletApi sendObj:loginObj];
```

#### 2. Transfer(Transfer)

```objc
    CocosTransferObj *transfer = [[CocosTransferObj alloc] init];
    transfer.dappName = @"Dapp Test";
    transfer.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336823814&di=854974e1a9bf2f774add305a7c0d417c&imgtype=0&src=http%3A%2F%2Fimg.jk51.com%2Fimg_jk51%2F78884959.jpeg";
    transfer.desc = @"Description of the requested transfer";
    transfer.symbol = @"COCOS";
    transfer.to = @"cocosbcx233";
    transfer.memo = @"test transfer cocos";
    transfer.amount = @"0.0001";
    transfer.from = @"wenhjx88";
    [CocosWalletApi sendObj:transfer];
```

#### 3. Contract Call(CocosCallContractObj)

```objc
    CocosCallContractObj *callContract = [[CocosCallContractObj alloc] init];
    callContract.dappName = @"myDapp";
    callContract.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336466306&di=86e0f6afdd435ee39dc57fbf7de11d81&imgtype=0&src=http%3A%2F%2F07.imgmini.eastday.com%2Fmobile%2F20180306%2F20180306_1f79b02260b76a95a2a8dfe68ef9fe10.png";
    callContract.param = @[@"test"];
    callContract.from = @"wenhjx88";
    callContract.contract = @"contract.airdrop01";
    callContract.method = @"test";
    callContract.desc = @"Description of the request to call the contract";
    [CocosWalletApi sendObj:callContract];
```

#### 4.Sign(CocosSignStringObj)

``` objc
    CocosSignStringObj *signString = [[CocosSignStringObj alloc] init];
    signString.dappName = @"myDapp";
    signString.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336466306&di=86e0f6afdd435ee39dc57fbf7de11d81&imgtype=0&src=http%3A%2F%2F07.imgmini.eastday.com%2Fmobile%2F20180306%2F20180306_1f79b02260b76a95a2a8dfe68ef9fe10.png";
    signString.from = @"wenhjx88";
    signString.signContent = @"signcontent1111";
    signString.desc = signString.signContent;
    [CocosWalletApi sendObj:signString];
```

