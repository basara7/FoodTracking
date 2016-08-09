//
//  MainPageViewController.h
//  FoodTracking
//
//  Created by Mao Mao on 16/8/5.
//  Copyright © 2016年 Mao Mao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainPageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView* tableView;

@end
