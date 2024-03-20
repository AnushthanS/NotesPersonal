 
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