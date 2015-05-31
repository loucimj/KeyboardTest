//
//  FormViewController.h
//  KeyboardTest
//
//  Created by Javi on 31/5/15.
//  Copyright (c) 2015 Javier Loucim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FormViewController : UIViewController <UITextFieldDelegate>


@property (weak, nonatomic) IBOutlet UIView *mainContainerView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) UITextField *activeField;


@end
