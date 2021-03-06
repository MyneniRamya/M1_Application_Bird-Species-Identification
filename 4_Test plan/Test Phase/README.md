## Training and Testing Phase

Deep learning operational working is similar to the human brain. It learns from the data and makes inferences on the data feature based on trained data. Therefore to develop a good neural model having a diverse as well as a huge dataset is necessary. For this purpose, In our research, we are using the data augmentation technique which helps to increase the number of training samples per class and reduce the effect of class imbalance. Relevant image augmentation techniques are chosen so that the neural model can learn from the diverse dataset. Those techniques are Gaussian Noise, Gaussian Blur, Flip, Contrast, Hue, Add (add some values to each channel of the pixel), multiply (multiply some values to each channel of the pixel), Sharp, Affine transform. The large dataset also help to avoid the problem of overfitting which happens quite often in deep network learning.

As the image dataset requires higher computational capability as compared to the text-based dataset. In our research, we try to reduce this computational requirement by removing the unwanted part from the image so that the neural model needs to deal with a lesser amount of pixel in the image for processing. So to eliminate background elements or regions and extract features from the only body of the birds, pre- trained object detection deep nets are used. For this model, we are using DFNN to localize birds in each image in training phase as well as in the inference phase. We have used the pre-trained weights of Mask DFNN, trained on the COCO dataset which contains 1.5 million object instances with 80 object categories(including birds).


## Bird species detection phase

Bird Detection: if the bird is detected by the Mask R-CNN algorithm in the image, then the rest of the image is removed except the segmented part. Then the cropped image is evaluated by the neural network. After evaluation, the prediction vectors are compared and the top 5 predicted species are displayed with their probability percentage.

No Bird Detection: if bird is not found in the image then the whole image is passed as an argument to the model then the model is evaluated and if the predicted values are less than 20% then it will prompt the user to input the valid image otherwise it will display the top 5 predicted species with their probability percentage.
