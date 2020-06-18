## iOS CocosWallet SDK接入文档

### 说明&支持
- 该SDK用于拉起 Dappx客户端，实现Dapp和Dappx客户端进行相关action操作的交互。

- 实例参考案例 Walletinvoker 项目

### 1. 手动拖入 Walletinvoker 项目中 walletinvoker 文件夹到自己的项目中

### 2. 配置 URL Schemes，
	- 为了Dappx客户端 能回调数据给自己的App

- 打开info.plist 配置如下：（以 dappdemo 为案例）

![](./image/URL Schemes.png)


### 3. 初始化
- 在 AppDelegate.m 文件中初始化
	- 引用头文件 #import "CocosWalletApi.h"

- 在 `application:didFinishLaunchingWithOptions` 方法中注册 URL Schemes
	- [CocosWalletApi registerAppID:@"dappdemo"];

### APIs

#### 1.授权登录 (CocosLoginObj)

```objc
     CocosLoginObj *loginObj = [[CocosLoginObj alloc] init];
    loginObj.dappIcon = @"https://ss3.bdstatic.com/70cFv8Sh_Q1YnxGkpoWK1HF6hhy/it/u=1552892908,1688888225&fm=26&gp=0.jpg";
    loginObj.dappName = @"Dapp Test";
    loginObj.desc = @"请求登录的描述信息";
    [CocosWalletApi sendObj:loginObj];
```

#### 2.转账(Transfer)

```objc
    CocosTransferObj *transfer = [[CocosTransferObj alloc] init];
    transfer.dappName = @"Dapp Test";
    transfer.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336823814&di=854974e1a9bf2f774add305a7c0d417c&imgtype=0&src=http%3A%2F%2Fimg.jk51.com%2Fimg_jk51%2F78884959.jpeg";
    transfer.desc = @"请求转账的描述信息";
    transfer.symbol = @"COCOS";
    transfer.to = @"cocosbcx233";
    transfer.memo = @"测试转cocos";
    transfer.amount = @"0.0001";
    transfer.from = @"wenhjx88";
    [CocosWalletApi sendObj:transfer];
```

#### 3.合约调用(CocosCallContractObj)

```objc
    CocosCallContractObj *callContract = [[CocosCallContractObj alloc] init];
    callContract.dappName = @"myDapp";
    callContract.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336466306&di=86e0f6afdd435ee39dc57fbf7de11d81&imgtype=0&src=http%3A%2F%2F07.imgmini.eastday.com%2Fmobile%2F20180306%2F20180306_1f79b02260b76a95a2a8dfe68ef9fe10.png";
    callContract.param = @[@(10)];
    callContract.from = @"syling";
    callContract.contract = @"contract.testnumber";
    callContract.method = @"hello";
    callContract.desc = @"请求调用合约的描述信息";
    [CocosWalletApi sendObj:callContract];
```

#### 4.签名(CocosSignStringObj)

``` objc
    CocosSignStringObj *signString = [[CocosSignStringObj alloc] init];
    signString.dappName = @"myDapp";
    signString.dappIcon = @"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1581336466306&di=86e0f6afdd435ee39dc57fbf7de11d81&imgtype=0&src=http%3A%2F%2F07.imgmini.eastday.com%2Fmobile%2F20180306%2F20180306_1f79b02260b76a95a2a8dfe68ef9fe10.png";
    signString.from = @"wenhjx88";
    signString.signContent = @"signcontent1111";
    signString.desc = signString.signContent;
    [CocosWalletApi sendObj:signString];
```