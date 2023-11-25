# Topic - Code Injection
	> Focus on SQL injection and XSS
### I. Introduction

- Definition of Code Injection
	- Code injection is the general term for attack types which consist of injecting code that is then executed by the application, exploiting the poor handling of untrusted data.

- Purpose of the Presentation
	- To gain an insight, how code injection, mainly sqli and xss happen(with demonstrations) and some simple measures to prevent these attacks.

### II. Overview of Code Injection

- Brief explanation of how code injection works
	- These types of attacks happen due to a lack of proper input/output data validation, like
		- weak regular expression
		- data format
		- amount of data expected
- Types of Code Injection:
    - SQL Injection
    - Cross-Site Scripting (XSS)
    - Command Injection

### III. Case Study 1: SQL Injection

- Explanation of SQL Injection
- Real-world example
- How the attack occurred
- Consequences and impact

### IV. Case Study 2: Cross-Site Scripting (XSS)

- Explanation of XSS
- Real-world example
- How the attack occured
- Consequences and impact

### V. Demonstrations

- **Demo 1: SQL Injection**
    
    - Step-by-step demonstration of a simple SQL injection attack on a test environment
    - Emphasize preventive measures (e.g., parameterized queries, input validation)
- https://www.hacksplaining.com/prevention/sql-injection
- https://github.com/TanayB11/sql-injection-demo
- https://www.youtube.com/watch?v=3C7mRjbHyZQ&list=PLbiKUzpM0B2r6WWQvHTY9BBpn8vYsU66m&index=1
<br>
- **Demo 2: Cross-Site Scripting (XSS)**

 - Live demonstration of a basic XSS attack on a vulnerable website
 - Showcase how to mitigate XSS vulnerabilities (e.g., input sanitization, Content Security Policy)
	 - https://github.com/bgres/xss-demo
<br>
-  **Demonstration 3: Victim's Perspective** *(Optional)*
    - Choose a simplified but realistic scenario where a user unwittingly becomes a victim of a code injection attack.
    - Emphasize a common user action that leads to the attack (e.g., clicking on a malicious link).
    
    - Simulate the victim's actions and show how the attack unfolds.
    - Highlight the potential consequences for the user and the organization.

### VI. General Mitigation Techniques

Common best practices for preventing code injection attacks:
 - Input validation and sanitization
		just a check with `isAlphanumeric()` is fine
- Use of parameterized queries
	- using wild cards automatically handles sanitization
- Using stored procedures as another layer of defence
	- ``` -- Example stored procedure
DELIMITER //
CREATE PROCEDURE GetUserDetails(IN p_username VARCHAR(255), IN p_password VARCHAR(255))
BEGIN
    SELECT * FROM users WHERE username = p_username AND password = p_password;
END //
DELIMITER ;```
- Regular security audits and testing

### VII. Conclusion

- Recap of key points
- Emphasize the importance of staying informed about evolving threats
- Encourage a proactive approach to cybersecurity

----
### Ashley Madison SQL Injection Case Study

Incident Overview:

In 2015, the Ashley Madison website, a platform for extramarital affairs, faced a significant data breach by a group named “Impact Team,” exposing user information and causing widespread consequences.

Key Points:

•	Root Causes: Poor security practices and vulnerabilities, including inadequate input validation and a lack of parameterized queries.
•	Timeline: The breach unfolded over time, from exploitation to public disclosure.
•	Consequences: Compromised user privacy, reputational damage, legal repercussions, and financial losses.

Response and Lessons:

•	Company’s Reaction: Ashley Madison responded by securing data, communicating with users, and enhancing security measures post-incident.
•	Lessons Learned: Emphasizes the importance of robust security practices, regular audits, and staying informed about evolving cyber threats.

Industry Impact:

The breach influenced cybersecurity practices in online dating and e-commerce, potentially leading to industry-wide changes.

User Trust:

Efforts to rebuild trust included transparent communication, enhanced security measures, and compensation strategies.

----

(https://medium.com/@laur.telliskivi/pentesting-basics-cookie-grabber-xss-8b672e4738b2)
### British Airways XSS Case Study

Incident Overview:

In 2018, British Airways faced a Magecart attack exploiting an XSS vulnerability in the Feedify JavaScript library on its website. The attackers modified the script to redirect customer data to a fraudulent server with an SSL certificate, resulting in credit card skimming during 380,000 transactions.

Technical Details:

•	Vulnerability Exploited: Specific XSS vulnerability within the Feedify JavaScript library targeted by Magecart.
•	Payload Modification: Attackers manipulated the script to exfiltrate customer data to their malicious server.
•	SSL Certificate Deception: Addition of an SSL certificate to the rogue server, creating a false sense of security for users.

Consequences and Impact:

•	Financial Loss: Signify the financial impact, covering compensation, legal costs, and expenses for security reinforcement.

Detection and Response:

•	Detection Method: Outline how British Airways detected the XSS attack, whether through monitoring, customer reports, or other means.
•	Immediate Response: Highlight rapid measures taken, including securing systems and involving law enforcement.

Regulatory Compliance:

•	GDPR Alignment: Explore how the incident aligned with GDPR regulations, addressing compliance and potential legal consequences.

Post-Incident Measures:

•	Security Enhancements: Briefly mention technical measures implemented post-incident to address XSS vulnerabilities.

Customer Communication:

•	Transparent Communication: Summarize British Airways’ communication strategy, focusing on transparency and trust restoration.

Long-Term Impact:

•	Reputation Management: Discuss technical and reputational consequences for British Airways.

Industry Impact and Lessons Learned:

•	Influence on Industry Practices: Explore how the incident affected security awareness and practices in the aviation and e-commerce sectors.
•	Key Technical Takeaways: Summarize the technical lessons learned for both British Airways and the broader industry.
