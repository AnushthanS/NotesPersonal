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

>In the ever-evolving landscape of digital communication, the prevalence of spam has become a ubiquitous challenge. Spam detectors, indispensable components of messaging and communication platforms, play a pivotal role in safeguarding users from unsolicited messages that often serve as marketing ploys or potential scams. Whether one is navigating through electronic mail services, participating in discussions on message boards, or engaging in timeline-based interactions on social media platforms, the necessity of robust spam detection mechanisms cannot be overstated. This report delves into the critical role of spam detectors, exploring the specific filtering systems that are employed to discern and segregate essential or regular messages from the deluge of unwanted and potentially harmful content. As we delve into the intricate workings of these detectors, we aim to unravel the complexities surrounding spam detection and its paramount importance in maintaining a secure and efficient digital communication environment.

## Motivation for the choice made

- It is becoming increasingly hard to classify mail as spam.
- With more and more bots communicating trivial messages through mail, the language processing model requires a good amount of training.
- Often emails sent by some organizations get misclassified as spam.
- Spam detection is also a mandatory component of any website that provides some form of social interaction.

>In the dynamic landscape of digital communication, the task of accurately classifying emails as spam has emerged as a formidable challenge. The proliferation of bots inundating inboxes with trivial messages has rendered traditional spam filters less effective, necessitating a paradigm shift in our approach to email security. The crux of the matter lies in the evolving nature of language and the relentless adaptability of these automated systems. To ensure precision in distinguishing between genuine and unwanted communications, language processing models demand continuous and comprehensive training.

>Furthermore, the collateral damage incurred by misclassifying emails from legitimate organizations adds another layer of complexity to the issue. The repercussions of such misclassifications extend beyond inconveniences, potentially impacting business communications and user experiences. Addressing this challenge requires a nuanced understanding of not only linguistic intricacies but also organizational nuances that contribute to the effective functioning of spam filters.

>Beyond the realm of electronic mail, the significance of spam detection extends to any website that facilitates social interaction. As online platforms become integral to our daily lives, ensuring a spam-free environment is paramount to fostering meaningful engagements. This report seeks to delve into the multifaceted motivations driving advancements in spam detection, exploring the intricacies of language processing, the impact of misclassifications, and the broader implications for websites offering social interaction. In doing so, we aim to shed light on the compelling reasons behind the ongoing efforts to enhance the efficacy of spam detection systems in our ever-evolving digital ecosystem.

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

----

## Term Report

> should at least consist of: Abstract, Introduction, State of the art work, Proposed Approach, Work Done, Results, Conclusion.

#### State of the art/ background
The landscape of spam detection has evolved significantly in response to the increasing sophistication of spamming techniques. Traditional rule-based systems, once the mainstay, now struggle to accurately classify emails due to the evolving tactics of spammers. Automated bots inundate communication channels, necessitating a shift toward advanced and adaptive solutions.

Modern spam detection heavily relies on language processing models, crucial for keeping pace with evolving spamming tactics. These models require extensive training datasets to grasp language nuances and contextual cues that distinguish legitimate communication from spam.

A persistent concern in spam detection is the misclassification of emails from reputable organizations, impacting business communications and user experiences. Fine-tuning spam filters becomes crucial to avoiding false positives and maintaining the reputation of both senders and recipients.

Beyond emails, spam detection is integral to social interaction websites. The imperative to uphold a spam-free environment aligns with the growing reliance on online interactions. As users seek meaningful engagements, the effectiveness of spam detection mechanisms becomes pivotal for the quality and security of digital interactions.

This section provides a concise overview of the challenges in spam detection, highlighting the inadequacies of traditional approaches and the evolving role of language processing models. The subsequent sections of this report delve into the intricacies of the NLP-based spam classifier assignment, offering insights into the approach and solutions employed to address contemporary spam detection challenges.

### Paper 1
>Spam emails pose a significant challenge by inundating inboxes and impeding effective communication while necessitating the arduous task of sifting through valuable content. In response to the current email overload, there is a growing need for autonomous solutions capable of distinguishing between important messages and spam. This paper proposes a novel approach utilizing a combination of Naïve Bayes machine learning and Particle Swarm Optimization (PSO). Naïve Bayes is employed to identify spam, while PSO optimizes its parameters, resulting in a substantial enhancement of accuracy and efficiency in spam detection. Previous research predominantly focused on identifying undesirable text emails, with an emphasis on early addressing of those containing images. Commonly employed techniques in text content analysis included Support Vector Machine (SVM) and Extreme Learning Machine (ELM). SVM demonstrated superior performance with an accuracy of 94.06%, compared to ELM's 93.04%. However, SVM consumed more time in each case compared to ELM. Consequently, ELM proved to be more efficient in terms of time taken. The amalgamation of the Naïve Bayes approach with PSO showcased a significant improvement in spam detection compared to relying solely on SVMs and ELMs. Looking forward, exploring alternative methods such as different swarm optimization techniques and machine learning approaches holds promise for continual progress in the field.

### Paper 2
>Twitter employs blacklisting services, such as Trend Micro, to combat spam; however, these blacklists are subject to speed limitations and susceptibility to zero-day spam accounts. Presently, the predominant spam detection techniques on Twitter leverage machine learning (ML), incorporating classification and clustering methods. In response to spammers' evolving strategies, which include various evasion tactics and the utilization of Adversarial Machine Learning (AML) techniques to deceive spam detectors, Twitter's spam detection approaches are categorized into Content Analysis, User Analysis, Tweet Analysis, Network Analysis, and Hybrid Analysis.

>Content Analysis places emphasis on accuracy and scalability, User Analysis focuses on improving accuracy and F-measure, Tweet Analysis prioritizes enhancing recall, Network Analysis seeks to improve detection rate, accuracy, and F-measure, while Hybrid Analysis aims for improvement in accuracy, F-measure, recall, and precision.

>Evaluation parameters for Twitter spam detection reveal the following percentages: recall at 23%, F-measure at 18%, precision at 17%, and accuracy at 14%. These figures highlight the multifaceted nature of Twitter's efforts to combat spam, employing a combination of ML-based techniques and a diversified set of analysis approaches to effectively address the evolving landscape of spamming tactics on the platform.


### Paper 3
>The proliferation of SMS scams has reached alarming proportions, with the United States alone reporting an estimated loss of USD 86 million to SMS scammers in 2021, as disclosed by the Federal Trade Commission. In light of these staggering figures, the imperative to implement a robust spam detection mechanism is underscored. However, current SMS spam detection research is fraught with methodological challenges and requires further exploration.

>This paper undertakes a comprehensive examination of the fraudulent SMS landscape, existing defense methods, and cutting-edge SMS spam research. It sheds light on the challenges inherent in current methodologies, potential misuse by scammers, and the essential requirements for an effective solution. The study specifically addresses the issue of outdated datasets, highlighting the Super SMS Spam Corpus—a dataset compiled from labeled SMS messages collected over the past decade from public and free research sources. Given the exponential growth of spam, the study underscores the critical need for an updated dataset to enhance the efficacy of spam detection mechanisms.

>Moreover, the research assesses various artificial intelligence (AI) models designed for detecting spam SMS, revealing their effectiveness against legitimate messages. While some deep learning models excel in identifying spam, the study also identifies attack strategies that diminish model effectiveness. This discovery underscores the need for future research to address these challenges and construct a robust spam SMS detection model capable of withstanding evolving tactics employed by scammers in the dynamic landscape of SMS scams.

#### Result
The NLP-based spam classifier, trained on 20% of the dataset, demonstrates a commendable accuracy of 68.76%. This accuracy metric serves as an indicator of the model's efficacy in distinguishing between spam and legitimate messages within the context of the assignment. The achieved accuracy reflects the successful application of NLP techniques, illustrating the model's capability to navigate the complexities of language nuances and contextual cues in identifying and classifying spam messages.

The result attests to the practical viability of employing NLP techniques, emphasizing their relevance in contemporary spam detection efforts. However, as the report progresses, further insights into precision, recall, and other evaluation metrics will provide a comprehensive understanding of the model's overall performance and potential areas for refinement.