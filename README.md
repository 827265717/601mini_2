# CYBERSECRURITY
## What is cybersecurity?
Cybersecurity is the protection of internet-connected systems, including hardware, software and data, from cyberattacks. In a computing context, security comprises cybersecurity and physical security -- both are used by enterprises to protect against unauthorized access to data centers and other computerized systems. Information security, which is designed to maintain the confidentiality, integrity and availability of data, is a subset of cybersecurity.

The most frequently adopted frameworks should come as no surprise to security practitioners:
1.PCI DSS (47%)
2.ISO 27001/27002 (35%)
3.CIS Critical Security Controls (32%)
4.NIST Framework for Improving Critical Infrastructure Security (29%)
### PCI DSS
#### Definition
The Payment Card Industry Data Security Standard (PCI DSS) is a set of security standards designed to ensure that ALL companies that accept, process, store or transmit credit card information maintain a secure environment.The PCI DSS applies to ANY organization, regardless of size or number of transactions, that accepts, transmits or stores any cardholder data.

The PCI Data Security Standard specifies twelve requirements for compliance, organized into six logically related groups called "control objectives". The six groups are:
1.Build and Maintain a Secure Network and Systems
2.Protect Cardholder Data
3.Maintain a Vulnerability Management Program
4.Implement Strong Access Control Measures
5.Regularly Monitor and Test Networks
6.Maintain an Information Security Policy
#### Risk management to protect cardholder data
Under PCI DSS’s requirement 3, merchants and financial institutions are implored to protect their clients’ sensitive data with strong cryptography. Non compliant solutions will not pass the audit.[3] A typical risk management program can be structured in 3 steps:
1.Identify all known risks and record/describe them in a risk register. For example, hardware security modules (HSM) that are used in the cryptographic key management process could potentially introduce their own risks if compromised, whether physically or logically. HSMs create a root of trust within in the system. However, while it is unlikely, if the HSM is compromised, this could compromise the entire system.
2.Develop a risk management program is to analyze all identified risks. Included in this analysis should be a mix of qualitative and quantitative techniques to determine what risk treatment methods should be used to reduce the possibility of risks. For example, an organization might analyze the risk of using a cloud HSM versus a physical device that they use onsite.
3.Treat the risks in response to the risk analysis that was previously performed. For example, employing different treatments to protect client information stored in a cloud HSM versus ensuring security both physically and logically for an onsite HSM, which could include implementing controls or obtaining insurance to maintain an acceptable level of risk.
Continuous monitoring and review are part of the process of reducing PCI DSS cryptography risks. This includes maintenance schedules and predefined escalation and recovery routines when security weaknesses are discovered.
