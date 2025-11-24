// Main App component - entry point of our application

import React from "react";
import ProfileCard from "./components/ProfileCard";
import { profileData } from "./data/profileData";

const App: React.FC = () => {
  return (
    <div className="min-h-screen bg-gradient-to-br from-gray-50 to-gray-100 flex items-center justify-center p-4">
      <ProfileCard profile={profileData} />
    </div>
  );
};

export default App;
