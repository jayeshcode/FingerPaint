//
//  ViewController.h
//  Finger Paint
//
//  Created by Jayesh Wadhwani on 2016-05-13.
//  Copyright © 2016 Jayesh Wadhwani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
CGPoint lastPoint;
CGFloat red;
CGFloat green;
CGFloat blue;
CGFloat brush;
CGFloat opacity;
BOOL mouseSwiped;
}

@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;

- (IBAction)actiononSlider:(id)sender;
@property (weak, nonatomic) IBOutlet UISlider *slider;

@end

