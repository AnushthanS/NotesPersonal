## Topic
- Introduction / Overview of the topic (30 seconds)
- Motivation behind the choice of the topic

## Literature Review
- A brief of what work has been done in this field in the last few years
- 3-4 papers, 1 slide per paper

## Pipeline
- Describe your project pipeline and the speed at which you're planning to complete this project
	- Dataset, dataset preprocessing, models, process of obtaining the dataset
	- Have to make our own contributions if we take a public dataset
- A description of how you plan to make your idea into a working model

____

# Topic Chosen -> *Spam Detector*

https://docs.google.com/presentation/d/15hBbqccjtbNcJQWULa4z6eVovWQr32pEU4igu2vgjso/edit#slide=id.g278d2a8a977_0_1353

- Spam Detectors filter messages or interactions that may be sent as some marketing ploy or a scam, usually to a multitude of users simultaneously.
- Mandatory for any messaging or communication platform, be it an electronic mail service, a message board, or a timeline-based social media platform.
- Have to use specific filtering systems to segregate important or regular messages and spam

## Motivation for the choice made

- It is becoming increasingly hard to classify mail as spam.
- With more and more bots communicating trivial messages through mail, the language processing model requires a good amount of training.
- Often emails sent by some organizations get misclassified as spam.
- Spam detection is also a mandatory component of any website that provides some form of social interaction.

## Literature Review

- https://www.researchgate.net/publication/331682212_Email_Spam_Detection_Using_Integrated_Approach_of_Naive_Bayes_and_Particle_Swarm_Optimization
- https://arxiv.org/pdf/2011.14754.pdf
- https://arxiv.org/pdf/2210.10451.pdf

## Pipelining
- https://towardsdatascience.com/how-to-build-your-first-spam-classifier-in-10-steps-fdbf5b1b3870
- Public messages Dataset
- IMP : Remove "not" from stop words list
- Load the dataset -> Dataset exploration using Exploratory Data Analysis (EDA) -> Split the dataset and apply tokenization as per requirement -> Vectorization for feature extraction -> Model training -> Accuracy Check and f-measure -> Classification report

---

## Data cleaning steps

*Most common methods:*
- Case standardization
- Removing Puncuatations
- Removing numbers
- Removing extra space
- Removing contractions
- Tokenization
- **Lemmatization**
	- tokens from this [repo](https://github.com/michmech/lemmatization-lists/tree/master)
- **Stemming**
- **Stop words removal**

*More case specific:*
- Standardizing Accent Characters

https://www.analyticsvidhya.com/blog/2022/01/text-cleaning-methods-in-nlp/

https://www.analyticsvidhya.com/blog/2022/07/step-by-step-exploratory-data-analysis-eda-using-python/

---- 

### Some observations from the other presentations

- A presentation substitute for a report
- Some more work on the data
	- Data is large enough, but may need to get a more in-depth understanding of the data at hand
	- Maybe add a bit more to the stop words list
- Other groups have written a less optimized, step by step code in favour of a lengthier presentation
----
- POS tagging
- Named entity recognition
- Apply Tf-IDF vectorizer for feature extraction
- Model traning
- Accuracy, f-measure, similarity score
- Using a classic Naive Bayes model for binary classification
	- https://machinelearningmastery.com/naive-bayes-classifier-scratch-python/
	- https://medium.com/@rangavamsi5/naïve-bayes-algorithm-implementation-from-scratch-in-python-7b2cc39268b9
	- https://www.analyticsvidhya.com/blog/2022/03/building-naive-bayes-classifier-from-scratch-to-perform-sentiment-analysis/