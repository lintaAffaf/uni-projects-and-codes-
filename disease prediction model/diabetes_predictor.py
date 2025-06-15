import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score

# Load the diabetes dataset
data = pd.read_csv('diabetes.csv')

# Display the dataset neatly
print("\n--- Diabetes Dataset ---")
pd.set_option('display.width', 1000)  # Increase display width to avoid truncation
pd.set_option('display.max_columns', None)  # Show all columns
pd.set_option('display.max_rows', None)  # Show all rows (if it's not too large)
print(data.head())  # Show first 5 rows of the dataset

# Features (X) and Target (y)
X = data.drop('Outcome', axis=1)  # All columns except 'Outcome'
y = data['Outcome']  # The 'Outcome' column is the target variable

# Split the data into training and testing sets (80% train, 20% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Initialize Decision Tree model
model = DecisionTreeClassifier(random_state=42)

# Train the model
model.fit(X_train, y_train)

# Make predictions
predictions = model.predict(X_test)

# Evaluate model performance (accuracy)
accuracy = accuracy_score(y_test, predictions)

# Output the result
print("\n--- Model Performance ---")
print(f'Accuracy of the model: {accuracy * 100:.2f}%')

# Optionally: Show the predictions alongside actual values
pred_df = pd.DataFrame({'Actual': y_test, 'Predicted': predictions})
print("\n--- Predictions vs Actual ---")
print(pred_df.head())  # Display first 5 predictions
