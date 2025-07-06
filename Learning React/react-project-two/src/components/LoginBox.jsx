import React from 'react';
import './LoginBox.css'; // Make sure the CSS is imported

const LoginBox = () => {
  return (
    <div className="loginbox-container">
      <form>
        <h2>Login</h2>
        <label htmlFor="username">Username:</label>
        <input type="text" id="username" name="username" placeholder="Enter username" />

        <label htmlFor="password">Password:</label>
        <input type="password" id="password" name="password" placeholder="Enter password" />

        <button type="submit">Login</button>
      </form>
    </div>
  );
};

export default LoginBox;
