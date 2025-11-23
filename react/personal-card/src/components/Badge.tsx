// small components for skill badges

import React from "react";

interface BedgeProps {
  text: string;
}

const Bedge: React.FC<BedgeProps> = ({ text }) => {
  return (
    <span className="bg-blue-100 text-blue-800 text-xs font-semibold px-3 py-1 rounded-full">
      {text}
    </span>
  );
};

export default Bedge;
