# Dual-Frequency-RFID-Security-System

This project focuses on enhancing security by integrating two different RFID technologies into a single system, allowing users to choose between frequencies and card types without needing multiple readers. The flexibility and adaptability of this system make it ideal for a wide range of security applications.

Components:
- 125KHz RFID Module (Wiegand Protocol):
  
  - Function: This module is used for reading low-frequency RFID cards (typically 125kHz or 25kHz), providing support for legacy access control systems that rely on this technology.
Wiegand Protocol: The module uses the Wiegand protocol, which is widely recognized in security systems, ensuring compatibility with various control devices and access systems.
MFRC522 RFID 13.58 MHz Reader:

Function: This high-frequency RFID reader supports 13.58 MHz cards (such as MIFARE), which are commonly used in modern security and identification systems.
Modern Security: It supports contactless communication and offers higher data transmission rates, making it suitable for secure, high-traffic environments.
Arduino Microcontroller:

System Control: The Arduino manages both RFID modules, allowing the system to switch between frequencies and manage card reading without the need for separate hardware.
Flexibility: This integration gives the user full control over which RFID technology they want to use, increasing system versatility.
Key Features:
Dual RFID Frequencies:

The system allows users to choose between the 25KHz RFID and the 13.58 MHz RFID, providing flexibility in terms of card compatibility.
This dual-frequency setup enhances security, as it enables the use of both legacy and modern RFID systems within a single device.
Single Device, Multiple Card Options:

Users can change the card type at any time without replacing the RFID reader. This is especially useful in environments where security policies might change over time or across different systems.
The system can be easily customized to switch between card types depending on user preferences or security needs.
Customizable Security:

The user can specify which card type they want to use for their access control system, giving them greater control over their security preferences.
The system’s ability to adapt to both card types provides enhanced security and functionality, reducing the need for redundant hardware.
Applications:
This project is particularly useful in environments where security is critical, such as office buildings, labs, or data centers. It allows seamless integration of both legacy and modern card systems, making it easy to upgrade without overhauling the entire infrastructure.

Modularity and Future Improvements:
Easy Upgrades: The modular nature of this system allows for easy upgrades, enabling future enhancements such as biometric integration or additional security layers.
User-Friendly Interface: Future versions could include a user-friendly interface, allowing administrators to easily switch between card types and frequencies via software.
Project Video and Diagram:
A detailed electronic diagram and a video showcasing the system in action will be included. [Insert Video and Diagram Here]
