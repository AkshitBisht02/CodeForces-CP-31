# Image to Grayscale Converter using OpenCV

A simple Python project that converts a colored image into a grayscale image using the OpenCV library.

## 📌 Features
- Reads an input image.
- Converts the image from BGR to Grayscale.
- Saves the grayscale image.
- Displays the grayscale image in a window.
- Handles invalid or missing image files gracefully.

## 🛠️ Technologies Used
- Python 3
- OpenCV (`cv2`)

## 📂 Project Structure

```
Image-to-Grayscale/
│── image.jpg          # Input image
│── greyImage.jpg      # Output grayscale image (generated)
│── grayscale.py       # Python script
│── README.md
```

## 🚀 Installation

1. Clone the repository:

```bash
git clone https://github.com/your-username/Image-to-Grayscale.git
```

2. Navigate to the project folder:

```bash
cd Image-to-Grayscale
```

3. Install OpenCV:

```bash
pip install opencv-python
```

## ▶️ Usage

1. Place the image you want to convert in the project folder.
2. Rename it to `image.jpg` (or update the filename in the code).
3. Run the script:

```bash
python grayscale.py
```

## 📜 Code Explanation

- `cv2.imread()` reads the input image.
- `cv2.cvtColor()` converts the image from BGR to Grayscale.
- `cv2.imwrite()` saves the grayscale image.
- `cv2.imshow()` displays the output image.
- `cv2.waitKey(0)` waits until a key is pressed.
- `cv2.destroyAllWindows()` closes all OpenCV windows.

## 📸 Output

- **Input:** `image.jpg`
- **Output:** `greyImage.jpg`

The grayscale image is also displayed in a new window.

## ⚠️ Note

If the image cannot be loaded, the program prints:

```
Image not loaded
```

Ensure that:
- The image exists in the project directory.
- The filename matches the one specified in the code.
- The image format is supported by OpenCV.

## 📄 License

This project is open-source and available for learning and educational purposes.
