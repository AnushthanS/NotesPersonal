 
- https://www.kaggle.com/code/kanncaa1/deep-learning-tutorial-for-beginners
- https://www.kaggle.com/code/markwijkhuizen/gislr-tf-data-processing-transformer-training
- https://www.kaggle.com/code/lonnieqin/isolated-sign-language-recognition-with-dnn
- https://www.kaggle.com/competitions/asl-signs/discussion/406306
- https://www.kaggle.com/code/markwijkhuizen/aslfr-transformer-training-inference
- https://www.kaggle.com/competitions/asl-fingerspelling/discussion/434485
- https://www.kaggle.com/competitions/asl-fingerspelling/discussion/409438
- https://www.youtube.com/@Siddhardhan/playlists
- https://youtube.com/playlist?list=PLblh5JKOoLUIxGDQs4LFFD--41Vzf-ME1&feature=shared
#### Also use [[ML_Paper.pdf]]
- Use MNIST dataset
- Focus on traditional machine learning algorithms, then CNN, then ANN

- https://www.youtube.com/watch?v=CqOfi41LfDw
- https://www.youtube.com/watch?v=tHzJMATAL0U


----
## Review 1 - Topic Presentation
### Introduction
### Motivation for choosing the topic
- We took the Natural Language Processing course, have been interested in the domain since
- Translation in general is challenging, context awareness is difficult to achieve
- Absence of widely available and popular sign language translators in the market, despite the technological advancements in related fields
	- especially in mobile computing
### Literature Review

1. **Effective recognition of ASL alphabets using ML classifiers, ANN and CNN**
*IEEE 2022 conference on Interdisciplinary approaches in Tech and Management of Social Innovation*
- Used MNIST sign language dataset
	- colored, 28x28 pixels, alphabets and digits (excluding J and Z)
- They compare a multitude of ML models for accuracy
	- Compare Linear Regression, Logistic Regression, Support Vector Machine, Random Forest and Convolutional Neural Network
	- A good entry point for us as beginners in the domain

- This is only a fingerspell level translation, and J and Z were trimmed because they required motion
	- If posture recognition is involved, a word level translation can be achieved

2. **SignFormer: DeepVision transformer for Sign Language Recognition**
*IEEE access 2023 (Research article)*
- Involves static ISL translation
	- input in the form of images
- Use transformers with 4 layers of self attention to achieve around 98% accuracy
	- Transformers are widely used in language processing tasks
- There is no multi-modal data analysis, no gesture recognition, no live data input
	- It is however a good implementation of the transformer model, can be used in our implementation

3. **Sign Language Transformers**
*IEEE explore 2020, Open Access by the Computer Vision Foundation (CVF)*
- Implementation very close to our goal
	- Continuous Sign Language Translation
- Use *PHOENIX14T* dataset, which contains recorded footage of signs
- Use transformers as their model, with intermediate gloss translation for faster translations
- No pose estimation or context-sensitivity though
### Project Pipeline
**1. Multiple Implementations:**

- **Objective:** Explore different approaches to build the final sign language translator.
- **Implementation:** Iterative approach, considering multiple papers and methodologies.

**2. Initial Implementation (Paper1):**

- **Objective:** Provide a foundational implementation suitable for beginners.
- **Details:** Implement classifiers, compare ML classifiers and CNN, create a simple fingerspell level translator.

**3. Modification and Feature Implementation (Paper2):**

- **Objective:** Enhance the initial implementation with features from Paper2.
- **Details:** Modify the system to incorporate features from Paper2, specifically trying Transformers for static ISL translation.

**4. Advanced Feature Implementation (Paper3):**

- **Objective:** Further enhance the system with features from Paper3.
- **Details:** Integrate intermediate gloss translations using transformers over a live "video-based dataset."

**5. Data Collection:**

- **Objective:** Gather essential data for training and improving the system.
- **Details:** Capture videos and motion data using XBOX Kinect, ensuring a diverse and comprehensive dataset.

**6. UI Development:**

- **Objective:** Create an interactive user interface for the translator.
- **Details:** Design and implement a user-friendly interface with a focus on speed and efficiency.

                 +--------------+
                 |  Start       |
                 +--------------+
                        |
           +------------------------+
           |  Multiple Implementations|
           +------------------------+
                        |
           +------------------+
           | Initial Implementation|
           +------------------+
                        |
           +---------------------------+
           |  Modification and Features|
           |    (Paper2)               |
           +---------------------------+
                        |
           +------------------------+
           | Advanced Features       |
           |   (Paper3)               |
           +------------------------+
                        |
           +------------------------+
           |  Data Collection        |
           +------------------------+
                        |
           +------------------------+
           | UI Development         |
           +------------------------+
                        |
                 +--------------+
                 |   End        |
                 +--------------+


### Deliverables for next review:
1. **Incorporate Step 2:** Implement the features outlined in Paper2, focusing on static ISL translation using transformers. 
2. **Parallel Data Collection:** Simultaneously work on gathering our own data for ISL. This includes capturing videos and motion data using the Kinect sensor.
----

# Review 2

### Summary
- previously proposed pipeline, with minor changes only
- what we did after that
- what do we want to accomplish before the next review

### 1st slide/recap:
previously completed work page
and deliverables mentioned for the next review page

### 2nd slide/work done in short:
- Got a static ISL dataset, alphabets and numbers only
	- Applied SVM and transfer learning on it, for learning purposes

- Started data collection
	- using ultraleap hand tracking device
	- contributed in multi-modal data collection: ultraleap hand tracking + xbox kinect

- Tried some approaches to work on word level translation
	- publicly available video dataset and our own hand tracking data

### 3rd slide:
## Fingerspell level translation
- dataset of alphabets and digits, 36 folders, provided to us
- 256x256 sized images, each folder having the primary image with thousands of augmentations
- Applied CNN on this dataset
	- first time applying cnn/working with images
	- got around 81% accuracy
- Then tried transfer learning
	- use of pre-trained model, like MobileNet, to get better results
	- got around 97% accuracy

### 4th and 5th slides:
## Hand tracking data collection
- participated in collection of the sign language dataset being gathered by the vision language team
- used ultraleap 3Di hand tracking device to collect word level data
- ultraleap provides leapc python api for collecting raw hand tracking data
- for any recording, we record by milliseconds, and output is in the form of a csv
- each row of the csv has 431 features
- features are more or less coordinate values
- so far we have 100 words, and gathered data with 50 participants

### 6th and 7th slides:
## Word level translation
- WLASL dataset, by Australian National University
	- 68,000 videos of 20,800 ASL glosses
	- gathered across 20 different websites
- Worked on a subset of this dataset of 100 glosses
- Used 2 approaches
	- Holistic visual appearance based approach
		- 3D CN
	- 2D human pose based approach
		- Temporal graph CN
- Holistic approach accuracy around 89%
- Pose based approach accuracy around 87%


## Ongoing work
- Actually trying to use our hand tracking data
	- led to us understanding about the features and the structure of data collected
- each row of the csv has 431 features
- features are more or less coordinate values
- so far we have 100 words, and gathered data with 50 participants
	- applied LSTM based CNN on it, but very low accuracy

## Deliverables for next review
- Collection of more data, enough to train models on it
- Implementing pre-processing techniques specific to language translation
- more work on pose estimation side
----
## Some references/resources
- https://www.youtube.com/@AmitMoryossef
- https://www.kaggle.com/code/kanncaa1/deep-learning-tutorial-for-beginners
- https://www.kaggle.com/code/markwijkhuizen/gislr-tf-data-processing-transformer-training
- https://www.kaggle.com/code/lonnieqin/isolated-sign-language-recognition-with-dnn
- https://www.kaggle.com/competitions/asl-signs/discussion/406306
- https://www.kaggle.com/code/markwijkhuizen/aslfr-transformer-training-inference
- https://www.kaggle.com/competitions/asl-fingerspelling/discussion/434485
- https://www.kaggle.com/competitions/asl-fingerspelling/discussion/409438
- https://www.youtube.com/@Siddhardhan/playlists
- https://youtube.com/playlist?list=PLblh5JKOoLUIxGDQs4LFFD--41Vzf-ME1&feature=shared
- Cool NN explanation https://www.youtube.com/watch?v=CqOfi41LfDw
----
- https://paperswithcode.com/task/sign-language-translation
----
  
